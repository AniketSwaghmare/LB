//write application which accept file name from user and display size of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int DisplaySize(char Fname[])
{
    char Data[20];
    int fd = 0;
    int iRet = 0;
    int iSum = 0;
    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open that File..\n");
        return -1;
    }

    printf("File Opened Successfully with FD %d\n",fd);


    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        iSum = iSum + iRet;
    }
    close(fd);
    return iSum;
}

int main()
{
    char Fname[20];
    int iRet = 0;
    printf("Enter the File Name..\n");
    scanf("%s",Fname);

    iRet = DisplaySize(Fname);
    printf("File Size is : %d bytes\n",iRet);   
    return 0;
}