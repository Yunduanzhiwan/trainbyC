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
    FileTimeToSystemTime(&ltime,&rtime);        //将文件时间转化为系统时间
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
    
    //定义变量
    FILETIME                IpCreationTime;                 //文件夹的创建时间
    FILETIME                IpLastAccessTime;               //对文件夹的最近访问时间
    FILETIME                IpLastWriteTime;                //文件夹的最近修改时间
    FILETIME            ftime;

    SYSTEMTIME     ktime;

    //获取文件夹的时间属性
    if(GetFileTime(hDir, &IpCreationTime, &IpLastAccessTime, &IpLastWriteTime))
    {
        printf("获取文件夹时间成功，如下：\n");
        printf("初始创建时间为：\t");
        print(IpCreationTime);
        printf("最近访问时间为：\t");
        print(IpLastAccessTime);
        printf("最近修改时间为：\t");
        print(IpLastWriteTime);
    }

    int temp = 0;
    printf("\n是否对文件时间进行修改？(1:修改，2:不修改):");
    scanf("%d",&temp);
    if(temp == 1)
    {
        //定义一些变量
        char year[15],times[15];
        SYSTEMTIME kktime;
        FILETIME  pptime;
        memset(year,0,15);
        memset(times,0,15);
		temp=0;
		printf("是否修改文件的创建时间？(1:修改，2:不修改):");
		scanf("%d",&temp);
		if(temp == 1){
		printf("请输入要修改为何时间（如2019-02-18 08:00:46）：");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //下面我将三个时间全部修改了，小伙伴可以根据自己的情况进行修改
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
		printf("是否修改文件的最近修改时间？(1:修改，2:不修改):");
		scanf("%d",&temp);
		if(temp == 1){
			printf("请输入要修改为何时间（如2019-02-18 08:00:46）：");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //下面我将三个时间全部修改了，小伙伴可以根据自己的情况进行修改
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
			printf("是否修改文件的最近修改时间？(1:修改，2:不修改):");
		scanf("%d",&temp);
		if(temp == 1){
			printf("请输入要修改为何时间（如2019-02-18 08:00:46）：");
        scanf("%s %s",year,times);
        sscanf(year, "%d-%d-%d", &kktime.wYear, &kktime.wMonth, &kktime.wDay);
        sscanf(times, "%d:%d:%d", &kktime.wHour, &kktime.wMinute, &kktime.wSecond);
        kktime.wDayOfWeek  = 1;
        kktime.wMilliseconds = 0;

        
        SystemTimeToFileTime(&kktime, &pptime);
        //下面我将三个时间全部修改了，小伙伴可以根据自己的情况进行修改
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
        printf("获取文件夹时间成功，如下：\n");
        printf("初始创建时间为：\t");
        print(IpCreationTime);
        printf("最近访问时间为：\t");
        print(IpLastAccessTime);
        printf("最近修改时间为：\t");
        print(IpLastWriteTime);
    }
    else
    {
    	
    	
        printf("再见！\n");
    }
    CloseHandle(hDir);
    return 0;
}

