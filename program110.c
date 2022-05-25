/*
* * * *
* * *
* * 
*

 */
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';
    for(i = iRow; i>=iRow; i--)
    {
        for(j = 1; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\t");
        
    }

    for(i = 1;i<=iRow;i++)
    {
        for(j =2;j<=i;j++)  
        {
        
              printf("*\t");
            
        }
        printf("\n");
        
    }
}
int main()
{
    int iValue1 = 0,iValue2 =0;

    printf("Enter the number of row : \n");
    scanf("%d",iValue1);
     printf("Enter the number of row : \n");
    scanf("%d",iValue2);

    Display(iValue1,iValue2);

    return 0;
}