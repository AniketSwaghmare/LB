//write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

//Input : "Marvellous Multi OS"
//          10

// OutPut : "Marvellous"


#include<stdio.h>

void StrNCpyX(char *src, char *dest,int iCnt)
{
    
    while(*src != '\0')
    {    

       while((*src != '\0') && (iCnt != 0))
       {
        *dest = *src;
        *dest++;
        *src++;
         iCnt--;
       }
        *dest = '\0';
        src++;
      }
     
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   //Empty String

    StrNCpyX(arr,brr,10);

    printf("%s",brr);       //Marvellous

    return 0;

}