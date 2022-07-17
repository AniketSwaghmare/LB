//write a program which Accept the File Name from user and Display the Data

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayData(char Fname[])
{
    char Data[10];
    int fd = 0;
    int iRet = 0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the File\n");
        return;
    }
    printf("File is Succesfully opened with FD %d\n",fd);

    while(iRet = read(fd,Data,sizeof(Data)) != 0)
    {
        write(1,Data,iRet);
    }
    close(fd);

}

int main()
{
    char Fname[20];
   

    printf("Enter file Name to Open\n");
    scanf("%s",Fname);

    DisplayData(Fname);

    
    return 0;
}