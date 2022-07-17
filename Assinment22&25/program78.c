//Accept character from user and check whether it is alphabet or no.(A-Z, a-z).
//Input: f
//OutPut: TRUE
//Input:  &
//Output:FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'A') || (ch >= 'Z') || (ch >= 'a') || (ch >= 'z'))
        {
           
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        ch++;   
    }
   
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}