//write a recursive program which accept number from user and return summation of its digits
//InPut : 879
//OutPut : 24

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo%10;
        iSum = iSum+iDigit;
        iNo = iNo/10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Addition is : %d\n",iRet);

    return 0;
}