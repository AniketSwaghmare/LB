//write a program which accept number from user and Count frequency of such a digits which are less than 6..

#include<stdio.h>

int Count(int iNo)
{
    int iCount = 0;
    while(iNo>0)
    {
        if((iNo % 10)<6)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d\n",iRet);
    

    return 0;

}