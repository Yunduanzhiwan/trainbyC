
#include<stdio.h>
#include<string.h>//��ʹ�õ��ַ�����ʱ��Ҫʹ��

#include<stdlib.h>


#include <unistd.h>
#include <time.h>   //����ϵͳʱ��
#define Max 500
struct Cmd{
    char cmd[30];   //�����ַ�
    char function[500];   //�������
    int post;    //������� 1-�ڲ����� 0-�ⲿ����
};
int count=0;
char *str_replace (char *source, char *find,  char *rep);
void Init(struct Cmd cm[Max])    //��cmd�ĵ��ж�ȡ
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
    int status;//����״̬ 
	char *buffer;
    printf("Microsoft Windows [�汾 10.0.19042.1348]\n");
    
    printf("(c) Microsoft Corporation����������Ȩ����\n");
    printf("��ï��   19215120523\n");
    while(strcmp(buffer,"quit")!=0){    //�Ƚ�str�������ݣ�����ͬ�򷵻�0ֵ������Ϊquit��ȽϽ��Ϊ0���˳�ѭ��
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
        strlwr(str);   //ת����Сд
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
            display(cm);   //���ó����ӡ�����������ʾ����
            printf("�����������ɲ�ѯ��ϸ��������Ϣ\n");
            flag=true;
        }else{
            for(int i=0;i<count;i++)
            {
                if(strcmp(strlist[0],cm[i].cmd)==0)
                {
                    if(cm[i].post==1){
                        printf("'%s' ���ڲ�����\n���������ý��ܣ�%s\n",str,cm[i].function);
                        if(strcmp(strlist[0],"time523")==0){
                            printf("���ڡ��·ݡ���ǰʱ�䡤���\n");
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
					 	    		printf("�ļ����Ƴɹ�");
								 }else if(status==-1){
								 	printf("�ļ�����ʧ��");
								 }
							}else{
								printf("�����ļ���ʽΪ��copy Դ�ļ� Ŀ���ļ�");
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
								printf("%s �������ɹ�",strlist[1]);
							}
							else if(status==1){
								printf("��������ʽ��ren oldname newname");
							}
							printf("\n");
						}
                    }
                    else{
                        printf("'%s' ���ⲿ���\n���������ý��ܣ�%s\n",str,cm[i].function);
                        if(strcmp(str,"java")==0){
                            printf("�÷���Java [-options] class [args��]\n<ִ����>\n��   Java [-options] -jar jarfile [args��]\n<ִ�� jar �ļ�>\n����ѡ�������\n    -d32      ʹ��32λ����ģ��(�������)\n    -d64      ʹ��64λ����ģ��(�������)\n    -client   ѡ��'client' VM\n    -server   ѡ��'server'VM\n                  Ĭ��VM��client.\n \n    -cp<Ŀ¼�� zip/jar �ļ���������·��>\n            ��;�ָ���Ŀ¼,jar����\n            �� ZIP �����б�,�����������ļ�\n");}
                   
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
                       			printf("ɾ���ļ��гɹ�\n"); 	
							}
							else{
								printf("ɾ���ļ���ʧ�ܣ��ļ��л�Ȩ�޲���\n"); 	
							}
						}
						if(strcmp(strlist[0],"md523")==0){
							str=str_replace(tstr,"523","");
                  //      	status=system(str);
                        	 if(status==0){
                       			printf("�����ļ��гɹ�\n"); 	
							}
							else{
									printf("�����ļ���ʧ��\n"); 	
							}
						}
				    }
                    flag=true;
                    break;
                }
            }
            if(!flag){
                if(strcmp(str,"quit")!=0){
                    printf("'%s' �����ڲ����ⲿ���Ҳ���ǿ����еĳ���\n���������ļ���\n",str);
                  
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
    printf("\n���������\n\n");
}
int main()
{
    struct Cmd cm[Max];
    Init(cm);
    process(cm);
    return 0;
}

char *str_replace (char *source, char *find,  char *rep){  
   // �ь����ֵ��L��  
   int find_L=strlen(find);  
   // ��Q���ֵ��L��  
   int rep_L=strlen(rep);  
   // �Y�����ֵ��L��  
   int length=strlen(source)+1;  
   // ��λƫ����  
   int gap=0;  
     
   // �����Y�����֣��K�}�u����  
   char *result = (char*)malloc(sizeof(char) * length);  
   strcpy(result, source);      
     
   // ��δ��ȡ�����ִ�  
   char *former=source;  
   // �ь����ֳ��F����ʼλַָ��  
   char *location= strstr(former, find);  
     
   // �u�M�ь�����Q������  
   while(location!=NULL){  
       // ���Ӷ�λƫ����  
       gap+=(location - former);  
       // ���Y����̖�����ь�����λַ��  
       result[gap]='\0';  
         
       // Ӌ���µ��L��  
       length+=(rep_L-find_L);  
       // ׃��ӛ���w���g  
       result = (char*)realloc(result, length * sizeof(char));  
       // ��Q�����ִ����ڽY������  
       strcat(result, rep);  
       // ���¶�λƫ����  
       gap+=rep_L;  
         
       // ������δ��ȡ�����ִ���λַ  
       former=location+find_L;  
       // ����δ��ȡ�������ִ����ڽY������  
       strcat(result, former);  
         
       // �ь����ֳ��F����ʼλַָ��  
       location= strstr(former, find);  
   }      
  
   return result;  
  
} 
