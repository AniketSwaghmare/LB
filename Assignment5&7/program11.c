//write a program which accept number from user and return difference between summation of even digits and summation of odd digits..

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iNo % 2)==0)
        {
            iSum1 = iSum1 + iDigit;
        }

        if((iNo % 2) != 0)
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo/10;
    }
    return iDiff = iSum1 - iSum2;

}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The Difference is :%d\n",iRet);
    return 0;
}