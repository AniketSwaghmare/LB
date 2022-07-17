//write application which accept file name from user and create that file.

//Input : Demo.txt
//Output: File created Successfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter The File Name that you want..\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    
    if(fd == -1)
    {
        printf("Unable to Create File..\n");
        return -1;
    }

    printf("File Created Successfully...%d\n",fd);
    
    close(fd);

    return 0;

}