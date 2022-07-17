//write a program which accept string from user and copy that charactersof that string into another string by revmoving all white spaces.

//Input : "Marvel lous Pyth on"
//OutPut : "MarvellousPython"

#include<stdio.h>
#include<stdlib.h>

void revwhit(char *src,char *dest)
{
  while(*src != '\0')
  {
    if(((*src >= 'A') && (*src <= 'Z')) || ((*src >= 'a') && (*src <= 'z')))
    {
      *dest = *src;
      src++;
      dest++;
    }
    else if(*src ==' ')
    {
      src++;
    }
  }
  *dest = '\0';
}

int main()
{
  char arr[30];
  char brr[30];   //Empty string

  printf("Enter the String with Extra Space..\n");
  scanf("%[^'\n']s",arr);

  revwhit(arr,brr);

  printf("%s",brr);    //MarvellousPython

  return 0; 
}