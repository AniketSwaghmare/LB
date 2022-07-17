//write a program which accept string from user and copy Small characters of that string into another string.

//Input : "Marvellous Multi OS"
// OutPut : "arvellousulti"


#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'a') && (*src <= 'z'))
    {
      *dest = *src;
      *dest++;
    }
    src++;
  }
    *dest = '\0';
} 

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   //Empty String

    StrCpySmall(arr,brr);

    printf("%s",brr);   //MMOS
    return 0;

}