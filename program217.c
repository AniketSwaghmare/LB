//write a program and which open the file.
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
    int fd = 0;         //File Descriptor
   
    printf("Enter file name to Open\n");  
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open the File\n");
        return -1;    //Failure  

    }
    
    printf("File is Succefully Opened with FD %d\n",fd);
    
    
    return 0;
}