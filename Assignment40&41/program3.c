//write application which accept file name from user and read all data from that file and display contents on screen.

//Input : Demo.txt
//Output: Display all data of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[10];
    int fd = 0;
    int iRet = 0;

  printf("Enter the File Name..\n");
  scanf("%s",Fname);

  fd = open(Fname,O_RDWR);
  if(fd == -1)
  {
    printf("Unable to Opene File Data..\n");
    return -1;
  }

    printf("Successfully Opene File With FD..%d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);
    
    return 0;

}