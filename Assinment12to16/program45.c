//Accept number from user and display below pattern.
// # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf(" \t# %d *\t",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of elemetns\n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}