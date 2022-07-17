//write a program which accept number from user and check whether it contains 0 in it or not..

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo>0)
    {
        if(iNo % 10 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");

    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}