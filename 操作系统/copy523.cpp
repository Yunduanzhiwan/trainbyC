#include<stdio.h>

#include <stdlib.h>
/**
* 文件复制函数
* @param fileRead 要复制的文件
* @param fileWrite 复制后文件的保存路径
* @return int 1: 复制成功；2: 复制失败
**/
int copyFile(char *fileRead, char *fileWrite){
	FILE *fpRead;  // 指向要复制的文件
	FILE *fpWrite;  // 指向复制后的文件
	int bufferLen = 1024*4;  // 缓冲区长度
	char *buffer = (char*)malloc(bufferLen);  // 开辟缓存
	int readCount;  // 实际读取的字节数
	if( (fpRead=fopen(fileRead, "rb")) == NULL || (fpWrite=fopen(fileWrite, "wb")) == NULL ){
		printf("Cannot open file, press any key to exit!\n");

		exit(1);
	}
// 不断从fileRead读取内容，放在缓冲区，再将缓冲区的内容写入fileWrite
	while( (readCount=fread(buffer, 1, bufferLen, fpRead)) > 0 ){
		fwrite(buffer, readCount, 1, fpWrite);
	}
	free(buffer);
	fclose(fpRead);
	fclose(fpWrite);
	return 1;
}
int main(int argc,char *argv[]){
	printf("this is copy start\n");
//	printf("args %d\n",argc);

//	printf("argv[1]=%s %s\n",argv[1],argv[2]);
	
	if(argv[1]&&argv[2]){
		if(copyFile(argv[1],argv[2])){
			printf("copy is success\n");
			return 1;
		} 
		return -1;
	}

	return 0;
}
