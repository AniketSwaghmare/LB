//write a program which accept string from user and  copy that characters of that string into another string reverse order

//Input : "Marvellous Python"
//OutPut : "nohtyp sullevraM"

#include<stdio.h>

void StrCpyrev(char *src,char *dest)
{
  char *start = src;
  char *end = src;
  char temp;

  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;
    
    start++;
    end--;
  }

  while(*src != '\0')
  { 
      *dest =*src;
      dest++;
      src++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Python";
  char brr[30];   //Empty string

  StrCpyrev(arr,brr);

  printf("%s",brr);    //nohtyp sullevraM

  return 0; 
}