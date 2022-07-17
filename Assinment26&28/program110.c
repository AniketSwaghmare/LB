//write a program which accept string from user and  copy that characters of that string into another string by converting all capital characters into capital case


//Input : "Marvellous Python 2"
//OutPut : "marvellous python 2"

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'A') && (*src <= 'Z'))
    {
      *src = *src + 32;
    }

    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Python 2";
  char brr[30];   //Empty string

  StrCpyCap(arr,brr);

  printf("%s",brr);    //marvellous python 2

  return 0; 
}