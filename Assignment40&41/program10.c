//write a program which accepts file name from user and one count from user and read that number of characters from starting position
//Input: 12
//OutPut: Display First 12 character from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayN(char FName[], int iSize)
{
    char Data[10];
    int iRet = 0;
    int fd = 0,iCnt =0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open\n");
        return;
    }
    printf("File Opend Successfully..\n");
    
    read(fd,Data,iSize);
    write(1,Data,iSize);


    close(fd);
}
int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the File Name\n");
    scanf("%s",FileName);

    printf("Enter the Number of characters\n");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);
}
