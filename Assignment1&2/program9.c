//Accept two number from user and siplay first number in second number of times..

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int SP = 0;
    for(SP = 0;iNo;iFrequency)
    {
        printf("%d\n",iNo,iFrequency);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);
    
    Display(iValue,iCount);

    return 0;
}