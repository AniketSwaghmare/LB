//write application which accept file name from user and open that file in read mode.
//Input : Demo.txt
//Output: File opened Succesfully

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter The File Name that You Want...\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Opene File..");
        return -1;
    }

    printf("Opened File Successfully..%d\n",fd);

    close(fd);
    
    return 0;

}