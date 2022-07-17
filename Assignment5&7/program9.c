//write a program which accept number from user and return the count of digits in betwen 3 and 7..

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
while(iNo>0)
{
    iDigit =((iNo % 3) && (iNo % 7));
    iNo = iNo / 10;
}
return iDigit;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d\n",iRet);

    return 0;
}