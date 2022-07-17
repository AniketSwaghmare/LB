//Accept character from user and check whether it is specical sysmbol or not (!,@,$,%,^,&,*).
//input:%
//output:true
//input : d
//output : false

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    while(ch != '\0')
    {
        if((ch >= '!') && (ch <= '*'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        ch++;
        ch = '\0';
    }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character\n");

    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}