#include <bits/stdc++.h>
#include <Windows.h>
#include <stdio.h>
#include<iostream>
using namespace std;
#include <stdlib.h>
#include<string.h>
void print(FILETIME ftime)
{
    char                    str[50];
    SYSTEMTIME rtime;
    FILETIME            ltime;

    memset(str,0,50);
    FileTimeToLocalFileTime(&ftime,&ltime);
    FileTimeToSystemTime(&ltime,&rtime);        //���ļ�ʱ��ת��Ϊϵͳʱ��
    sprintf(str, "%04u-%02u-%02u %02u:%02u:%02u",rtime.wYear, rtime.wMonth, rtime.wDay, rtime.wHour, rtime.wMinute, rtime.wSecond);
    printf("%s\n",str);
}

int main(int argc, char *argv[])
{
	char *s="C:\\Users\\ASUS\\Pictures\\Saved Pictures\\bk.png";
    printf(s);
    printf("\n");
    HANDLE hDir = CreateFile(s, GENERIC_READ|GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_DELETE, NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, NULL);
    if(hDir == INVALID_HANDLE_VALUE)
    {
        printf("Get the dictionary failed!\n");
        CloseHandle(hDir);
        return 0;
    }
    
    //�������
    FILETIME                IpCreationTime;                 //�ļ��еĴ���ʱ��
    FILETIME                IpLastAccessTime;               //���ļ��е��������ʱ��
    FILETIME                IpLastWriteTime;                //�ļ��е�����޸�ʱ��
    FILETIME            ftime;

    SYSTEMTIME     ktime;

    //��ȡ�ļ��е�ʱ������
    if(GetFileTime(hDir, &IpCreationTime, &IpLastAccessTime, &IpLastWriteTime))
    {
        printf("��ȡ�ļ���ʱ��ɹ������£�\n");
        printf("��ʼ����ʱ��Ϊ��\t");
        print(IpCreationTime);
        printf("�������ʱ��Ϊ��\t");
        print(IpLastAccessTime);
        printf("����޸�ʱ��Ϊ��\t");
        print(IpLastWriteTime);
    }

    int temp = 0;
    printf("\n�Ƿ���ļ�ʱ������޸ģ�(1:�޸ģ�2:���޸�):");
    scanf("%d",&temp);
    if(temp == 1)
    {
        //����һЩ����
        char year[15],times[15];
        SYSTEMTIME kktime;
        FILETIME  pptime;
        memset(year,0,15);
        memset(times,0,15);
		temp=0;
		printf("�Ƿ��޸��ļ��Ĵ���ʱ�䣿(1:�޸ģ�2:���޸�):");
		scanf("%d",&temp);
		if(temp == 1){
		printf("������Ҫ�޸�Ϊ��ʱ�䣨��2019-02-18 08:00:46����");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //�����ҽ�����ʱ��ȫ���޸��ˣ�С�����Ը����Լ�����������޸�
        BOOL retval = SetFileTime(hDir, &pptime,&IpLastAccessTime,&IpLastWriteTime);     
        if(retval == TRUE)
        {
            printf("Success\n");
				
            
        }
        else
        {
            printf("Failed\n");
        }
			
		}
		memset(year,0,15);
        memset(times,0,15);
		temp=0;
		printf("�Ƿ��޸��ļ�������޸�ʱ�䣿(1:�޸ģ�2:���޸�):");
		scanf("%d",&temp);
		if(temp == 1){
			printf("������Ҫ�޸�Ϊ��ʱ�䣨��2019-02-18 08:00:46����");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //�����ҽ�����ʱ��ȫ���޸��ˣ�С�����Ը����Լ�����������޸�
        BOOL retval = SetFileTime(hDir, &IpCreationTime,&pptime,&IpLastWriteTime);     
        if(retval == TRUE)
        {
            printf("Success\n");
				
            
        }
        else
        {
            printf("Failed\n");
        }
		
		
		
		
		}
		memset(year,0,15);
        memset(times,0,15);
		temp=0;
			printf("�Ƿ��޸��ļ�������޸�ʱ�䣿(1:�޸ģ�2:���޸�):");
		scanf("%d",&temp);
		if(temp == 1){
			printf("������Ҫ�޸�Ϊ��ʱ�䣨��2019-02-18 08:00:46����");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //�����ҽ�����ʱ��ȫ���޸��ˣ�С�����Ը����Լ�����������޸�
        BOOL retval = SetFileTime(hDir, &IpCreationTime, &IpLastAccessTime, &pptime);     
        if(retval == TRUE)
        {
            printf("Success\n");
				
            
        }
        else
        {
            printf("Failed\n");
        }
		
		
		
		
		}	
		
        
    }
    
        if(GetFileTime(hDir, &IpCreationTime, &IpLastAccessTime, &IpLastWriteTime))
    {
        printf("��ȡ�ļ���ʱ��ɹ������£�\n");
        printf("��ʼ����ʱ��Ϊ��\t");
        print(IpCreationTime);
        printf("�������ʱ��Ϊ��\t");
        print(IpLastAccessTime);
        printf("����޸�ʱ��Ϊ��\t");
        print(IpLastWriteTime);
    }
    else
    {
    	
    	
        printf("�ټ���\n");
    }
    CloseHandle(hDir);
    return 0;
}

