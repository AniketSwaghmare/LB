//write a recursive program which accept Number from user and return its factorial.
//InPut : 5
//OutPut : 120

#include<stdio.h>

int Fact(int iNo)
{
  static int iFact = 1;

  if(iNo > 0)
  {
      iFact = iFact*iNo;
      iNo--;
      Fact(iNo);
  }
  return iFact;
}

int main()
{
   int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is  : %d\n",iRet);

    return 0;
}