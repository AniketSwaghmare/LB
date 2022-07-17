//wrote a program which accepts file name from user and count number of capital characters from that file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountCapital(char Fname[])
{
    char Data[1024];
    int fd = 0,iRet = 0,i = 0,iCnt = 0;

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open File..\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i<iRet; i++)
        {
            if(Data[i] >= 'A' && Data[i] <= 'Z')
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}
int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter the File Name\n");
    scanf("%s",Fname);

    iRet = CountCapital(Fname);

    printf("The Count of Capital Character are : %d\n",iRet);
}
