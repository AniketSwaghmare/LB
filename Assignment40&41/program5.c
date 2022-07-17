//write application which accept file name from user and one string from user.write that string at the end of file.


//Input : Demo.txt
 //         Hello World
//Output:  write Hello World at the end of Demo.txt file


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void FileDataX(char Source[],char *str)
{
    char Data[50];
    char FData[10];
    int iRet = 0;
    int fd = 0,Ret = 0;

    fd = open(Source,O_RDWR |O_APPEND);

    if(fd == -1)
    {
      printf("Unable to open file\n");
      return;
    }

    printf("Open File Successfully\n");

  write(fd,str,strlen(str));
 
}
int main()
{
 char Fname[20];
  char str[100];

 printf("Enter the File Name\n");
 scanf("%s",Fname);

  printf("Enter the Data\n");
  scanf(" %[^'\n']s",&str);


  FileDataX(Fname,str);
    return 0;

}