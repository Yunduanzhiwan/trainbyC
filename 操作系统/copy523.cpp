#include<stdio.h>

#include <stdlib.h>
/**
* �ļ����ƺ���
* @param fileRead Ҫ���Ƶ��ļ�
* @param fileWrite ���ƺ��ļ��ı���·��
* @return int 1: ���Ƴɹ���2: ����ʧ��
**/
int copyFile(char *fileRead, char *fileWrite){
	FILE *fpRead;  // ָ��Ҫ���Ƶ��ļ�
	FILE *fpWrite;  // ָ���ƺ���ļ�
	int bufferLen = 1024*4;  // ����������
	char *buffer = (char*)malloc(bufferLen);  // ���ٻ���
	int readCount;  // ʵ�ʶ�ȡ���ֽ���
	if( (fpRead=fopen(fileRead, "rb")) == NULL || (fpWrite=fopen(fileWrite, "wb")) == NULL ){
		printf("Cannot open file, press any key to exit!\n");

		exit(1);
	}
// ���ϴ�fileRead��ȡ���ݣ����ڻ��������ٽ�������������д��fileWrite
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
