//Accept number of rows and number of columns from user and display below pattern..
// Input : iRow:4 iCol:4
/*
 A B C D
 a b c d
 A B C D
 a b c d
*/


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch1 = '\0',ch2='\0';

    for(i = 1,ch1='A';i<=iRow;i++,ch1++)
    {
       printf("%c\t",ch1);
       
    }
     printf("\n");

       for(j = 1,ch2 ='a';j<=iCol;j++,ch2++)
        {
           printf("%c\t",ch2);
        }
         printf("\n");
          for(i = 1,ch1='A';i<=iRow;i++,ch1++)
    {
       printf("%c\t",ch1);
       
    }
     printf("\n");

       for(j = 1,ch2 ='a';j<=iCol;j++,ch2++)
        {
           printf("%c\t",ch2);
        }
         printf("\n");
    
  
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}