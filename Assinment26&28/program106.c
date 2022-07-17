//write a program which accept string from user and concat second string after first string.(Implement strcat() function).

//Input : "Marvellous Multi OS"
//        "Logic Building"
// OutPut : "Marvellous Multi OS Logic Building "


#include<stdio.h>

void StrCatX(char *src,char *dest)
{
  while(*src != '\0')       //Traverse first string till end
  {
    src++;
  }

  while(*dest != '\0')    //copy contents of destination in source
  {
    *src = *dest;
      src++;
      dest++;
  }
   *dest = '\0';
} 

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[50] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);   //Marvellous Multi OS Logic Building

    return 0;

}