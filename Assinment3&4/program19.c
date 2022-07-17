#include<stdio.h>

void DisplayEvenFActor(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for(i = 1;i<=iNo;i++)
    {
        if((iNo % i)==0)
        {
            printf("%d\n",i);

        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayEvenFActor(iValue);

    return 0;
}