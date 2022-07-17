//Accept number of row and number of columns from user and display below pattern..
//Input: iRow:4 iCol:4

/*
    * * * *
    * * *
    * *
    *
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i =iRow;i>=1;i--)
    {
        for(j = 1;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row\n");
    scanf("%d",&iValue1);
    printf("Enter number of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}