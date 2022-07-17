#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20];
    char Data[100];
    int fd = 0;         //File Descriptor
    int iRet = 0;
    printf("Enter file name to create\n");  
    scanf("%s",Fname);
    
    printf("Enter the data that you want to write\n");
    scanf(" %[^'\n']s",Data);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create the File\n");
        return -1;    //Failure  

    }
    
    printf("File is Succefully created with FD %d\n",fd);
    
    iRet = write(fd,Data,strlen(Data));

    printf("%d byte Succesfully written in the File\n",iRet);
    
    return 0;
}