//write a program and which open the File and Write the Data in it File.

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
    char Data[100];
    int fd = 0;         //File Descriptor
    int iRet = 0;

    printf("Enter file name to Open\n");  
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open the File\n");
        return -1;    //Failure  

    }

    printf("File is Succefully Opened with FD %d\n",fd);
    
    printf("Enter the Data that you want\n");
    scanf(" %[^'\n']S",Data);

    iRet = write(fd,Data,strlen(Data));

  
    printf("%d bytes gets Succesfully written in the file\n",iRet);
    
    
    return 0;
}