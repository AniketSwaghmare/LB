//write a program and which Accept the File Name and Read voel Data

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//O_RDONLY  -  open and Read only
//O_WRONLY  -  open and write
//O_RDWR    -  Read + write


int main()
{
    char Fname[20];
    char Data[10];        //Mug ahi
    int fd = 0;         //File Descriptor
    int iRet = 0;

    printf("Enter file name to Open\n");  
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the File\n");
        return -1;    //Failure  

    }

    printf("File is Succefully Opened with FD %d\n",fd);
    
    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);

    return 0;
}

// 0   STDIN     Keyboard
// 1   STDOUT    Monitor
// 2   STDERR    Monitor
