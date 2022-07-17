//Accept character from user and ceck whether it is capital or not.
//Input: F
//Output: TRUE
//Input: d
//Output: FALSE


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    while(ch != '\0')
    {
        if((ch == 'A') || (ch == 'Z'))
        {
            return TRUE;
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}