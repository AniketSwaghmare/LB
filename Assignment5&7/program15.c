//write a program which accept number from user and count frequency of 4 in it..

#include<stdio.h>

int CountFour(int iNo)
{
    int iCount = 0;

    while(iNo>0)
    {
        if(iNo % 10 == 4)
        {
            iCount++;
        }
        iNo = iNo/10;

    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d\n",iRet);
    return 0;
}