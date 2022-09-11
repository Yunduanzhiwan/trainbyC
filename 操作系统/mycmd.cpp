
#include<stdio.h>
#include<string.h>//在使用到字符数组时需要使用

#include<stdlib.h>


#include <unistd.h>
#include <time.h>   //调用系统时间
#define Max 500
struct Cmd{
    char cmd[30];   //命令字符
    char function[500];   //命令解释
    int post;    //命令分类 1-内部命令 0-外部命令
};
int count=0;
char *str_replace (char *source, char *find,  char *rep);
void Init(struct Cmd cm[Max])    //从cmd文档中读取
{
    FILE *fp;
    if((fp=fopen("cmd.txt","a+"))==NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    printf("1");
    while(!feof(fp)&&fgetc(fp)!=EOF)
    {
        fseek(fp,-1L,SEEK_CUR);
        fscanf(fp,"%s%s%d",&cm[count].cmd,&cm[count].function,&cm[count].post);
        count++;
    }
    if(fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    
    printf("test init");
}
void display(struct Cmd cm[Max])
{
    for(int i=0;i<count;i++)
    {
        printf("%-10s%s\n",strupr(cm[i].cmd),cm[i].function);
        strlwr(cm[i].cmd);
    }
}
void process(struct Cmd cm[Max])
{
    time_t timep;
    char s[30];
    int status;//调用状态 
	char *buffer;
    printf("Microsoft Windows [版本 10.0.19042.1348]\n");
    
    printf("(c) Microsoft Corporation。保留所有权利。\n");
    printf("江茂明   19215120523\n");
    while(strcmp(buffer,"quit")!=0){    //比较str输入内容，若相同则返回0值，即若为quit则比较结果为0，退出循环
		if((buffer = getcwd(NULL,0))==NULL){
			printf("E:\\yefeng\\Documents>");
		}
		else{
			printf("%s>",buffer);
		}
		char* str = (char*)malloc(20);
		while(NULL==gets(str));
		if(strlen(str)==0){
			free(str);
			continue;
		}
		char tstr[20];
		strcpy(tstr, str);
        strlwr(str);   //转换大小写
		char *strlist[4];
		for(int i=0;i<4;++i)strlist[i]=NULL;
		char *p = strtok(str, " ");
		if(p){
			strlist[0]=p;
		}
		int i=0;
		while(p=strtok(NULL, " ")){
			++i;
			if(i<=3)strlist[i]=p;
				
		}

        bool flag=false;
        if(strcmp(strlist[0],"help")==0)
        {
            display(cm);   //调用程序打印出所有命令及提示内容
            printf("键入命令名可查询详细的命令信息\n");
            flag=true;
        }else{
            for(int i=0;i<count;i++)
            {
                if(strcmp(strlist[0],cm[i].cmd)==0)
                {
                    if(cm[i].post==1){
                        printf("'%s' 是内部命令\n该命令作用介绍：%s\n",str,cm[i].function);
                        if(strcmp(strlist[0],"time523")==0){
                            printf("星期·月份·当前时间·年份\n");
                            time(&timep);
    						strcpy(s,ctime(&timep));
                            printf("%s",s);
						}
						if(strcmp(strlist[0],"type523")==0){
							str=str_replace(tstr,"523","");
                        	//system(str);
						}
					    if(strcmp(strlist[0],"copy523")==0){
						    if(strlist[1]&&strlist[2]){
						    	char t1[20];
						    	strcpy(t1,strlist[1]);
						    	char exepath[80];
						    	strcpy(exepath,"copy523.exe ");
								strcat(exepath,strlist[1]);
								char *ttt=" ";
								strcat(exepath,ttt);
						    	strcat(exepath,strlist[2]);
								int status=system(exepath);
					 	    	printf("status=%d\n",status);
					 	    	if(status==1){
					 	    		printf("文件复制成功");
								 }else if(status==-1){
								 	printf("文件复制失败");
								 }
							}else{
								printf("复制文件格式为：copy 源文件 目标文件");
							}
							printf("\n");
						}
						if(strcmp(strlist[0],"echo523")==0){
							str=str_replace(tstr,"523","");
//							printf("str=%s\n",str);
//                        	system(str);
							
						}
						if(strcmp(strlist[0],"date523")==0){
                     //   	system("date");
						}
						if(strcmp(strlist[0],"ren523")==0){
							str=str_replace(tstr,"523","");
                    //    	status=system(str);
							if(status==0){
								printf("%s 重命名成功",strlist[1]);
							}
							else if(status==1){
								printf("重命名格式：ren oldname newname");
							}
							printf("\n");
						}
                    }
                    else{
                        printf("'%s' 是外部命令！\n该命令作用介绍：%s\n",str,cm[i].function);
                        if(strcmp(str,"java")==0){
                            printf("用法：Java [-options] class [args…]\n<执行类>\n或   Java [-options] -jar jarfile [args…]\n<执行 jar 文件>\n其中选项包括：\n    -d32      使用32位数据模型(如果可用)\n    -d64      使用64位数据模型(如果可用)\n    -client   选择'client' VM\n    -server   选择'server'VM\n                  默认VM是client.\n \n    -cp<目录和 zip/jar 文件的类搜索路径>\n            用;分隔的目录,jar档案\n            和 ZIP 档案列表,用于搜索类文件\n");}
                   
				   		if(strcmp(strlist[0],"dir523")==0){
//				   			tstr.replace("^\d\d\d$"); 
						    str=str_replace(tstr,"523","");
             //           	system(str);
						}
                        if(strcmp(strlist[0],"cd523")==0){
                        	if(strlist[1]){
                        		strlist[1]=str_replace(strlist[1],"523","");
                        		chdir(strlist[1]);
							}else{
								printf("%s>",buffer);
							}
						}
						if(strcmp(strlist[0],"cls523")==0){
						char* argument_list[] = {"cls", "", NULL};
//                      	   system("cls");
                      	   execvp("cls",argument_list);
						}
						if(strcmp(strlist[0],"rd523")==0){
							str=str_replace(tstr,"523","");
                   //    		 status=system(str);
                       		 if(status==0){
                       			printf("删除文件夹成功\n"); 	
							}
							else{
								printf("删除文件夹失败，文件夹或权限不够\n"); 	
							}
						}
						if(strcmp(strlist[0],"md523")==0){
							str=str_replace(tstr,"523","");
                  //      	status=system(str);
                        	 if(status==0){
                       			printf("创建文件夹成功\n"); 	
							}
							else{
									printf("创建文件夹失败\n"); 	
							}
						}
				    }
                    flag=true;
                    break;
                }
            }
            if(!flag){
                if(strcmp(str,"quit")!=0){
                    printf("'%s' 不是内部或外部命令，也不是可运行的程序\n或批处理文件。\n",str);
                  
//					return;
                	
				}
				if(strcmp(str,"quit")==0){
					break;
				}
            }
        }
        free(str);
        free(buffer);
    }
    printf("\n程序结束！\n\n");
}
int main()
{
    struct Cmd cm[Max];
    Init(cm);
    process(cm);
    return 0;
}

char *str_replace (char *source, char *find,  char *rep){  
   // 搜尋文字的長度  
   int find_L=strlen(find);  
   // 替換文字的長度  
   int rep_L=strlen(rep);  
   // 結果文字的長度  
   int length=strlen(source)+1;  
   // 定位偏移量  
   int gap=0;  
     
   // 建立結果文字，並複製文字  
   char *result = (char*)malloc(sizeof(char) * length);  
   strcpy(result, source);      
     
   // 尚未被取代的字串  
   char *former=source;  
   // 搜尋文字出現的起始位址指標  
   char *location= strstr(former, find);  
     
   // 漸進搜尋欲替換的文字  
   while(location!=NULL){  
       // 增加定位偏移量  
       gap+=(location - former);  
       // 將結束符號定在搜尋到的位址上  
       result[gap]='\0';  
         
       // 計算新的長度  
       length+=(rep_L-find_L);  
       // 變更記憶體空間  
       result = (char*)realloc(result, length * sizeof(char));  
       // 替換的文字串接在結果後面  
       strcat(result, rep);  
       // 更新定位偏移量  
       gap+=rep_L;  
         
       // 更新尚未被取代的字串的位址  
       former=location+find_L;  
       // 將尚未被取代的文字串接在結果後面  
       strcat(result, former);  
         
       // 搜尋文字出現的起始位址指標  
       location= strstr(former, find);  
   }      
  
   return result;  
  
} 
