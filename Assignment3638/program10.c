//writ a recursive program which accept number from user and return its product of digits
//Input:523
//OutPut : 30

#include<stdio.h>

int Multi(int iNo)
{
 int iDigit = 1;
  static int multi = 1;

  if(iNo != 0)
  {
    
    iDigit = iNo % 10;
    multi =  multi * iDigit;
    iNo = iNo/10;

      Multi(iNo);
  }
  return multi;
}



int main()
{
  int iValue = 0,iRet = 0;

  printf("Enter the Number\n");
  scanf("%d",&iValue);

  iRet = Multi(iValue);

  printf("product is : %d\n",iRet);

  return 0;
}