//Input : Row = 4  columns = 4
//Output : 
/*
   $ * * * 
   * $ * * 
   * * $ *
   * * * $
    */


#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0,j = 0;
  if(iRow != iCol)
  {
    printf("Please Enter Vaild Number");
    return;
  }

  for(i = 1;i<=iRow;i++)
  {
    for(j= 1;j<=iCol;j++)
    {
      if(j == i)
      {
        printf("$\t");
      }
      else if(i<j)
      {
       printf("*\t");
      }
      else if(i>j)
      {
        printf("#\t");
      }
    }
    printf("\n");
  }
  


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row :\n");
    scanf("%d",&iValue1);
    printf("Enter number of colum: \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}