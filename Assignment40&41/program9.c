//wrote a program which accepts file name from user and one character from user and Count number of occureences of that characters from that file.
//Input: 'M'
//OutPut: Frequency of M is : 7

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountChar(char Fname[], char Ch)
{
    char Data[30];
   int iRet = 0,iCount = 0;
   int fd = 0,iCnt = 0;

   fd = open(Fname,O_RDONLY);
   if(fd == -1)
   {
        printf("Unable to File Opened\n");
        return -1;
   } 

   printf("File Open Successfully\n");

    while((iRet = read(fd,Data,sizeof(Data)))!=0)
   {
        for(iCnt = 0; iCnt<iRet; iCnt++)
        {
            if(Data[iCnt] == Ch)
            {
                iCount++;
            }
        } 
   }

    close(fd);
   return iCount;   
}
int main()
{
   char FileName[30];
   int iRet = 0;
   char Value;

     printf("Enter the Character\n");
   scanf("%c",&Value);
   
   printf("Enter the File Name\n");
   scanf("%s",FileName);

  

   iRet = CountChar(FileName,Value);

   printf("Frequency is %d\n",iRet);
}
