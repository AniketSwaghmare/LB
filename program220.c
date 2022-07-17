//write a program and which open the File and Read the Data in it File

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
    

    iRet = read(fd,Data,10);

  
    printf("%d bytes gets Succesfully Read from the file\n",iRet);

    printf("Data from file is : \n");
    
    write(1,Data,iRet);
 
    return 0;
}

//STDIN     Keyboard
//STDOUT    Monitor
//STDERR    Monitor
