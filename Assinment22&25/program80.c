//Accept character from user and ceck whether it is small case or not(a-z)
//Input: g
//Output: TRUE
//Input: D
//Output: FALSE


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}