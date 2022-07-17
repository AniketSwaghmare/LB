//write a program which accept string from user and acept one character. Check whether that character
// is present in string or not.

//Input: "Marvellous Multi OS"
//          e
//Output: True

//Input:    "Marvellous Multi OS"
//           w
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
       if(*str == ch)
      {
         return TRUE;

      }
        str++;
    }
}

int main()
{
    char cValue = '\0';
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string..\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf("%s",&cValue);


    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found..\n");
    }
    else
    {
        printf("Character Not Found..\n");
    }

    return 0;
}