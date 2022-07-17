//write a recursive program which accept number from user and return smallest digit.
// Input : 87983
// OutPut : 3

#include<stdio.h>

int Minimum(int iNo)
{   
   int iMin = 0;
   static int iDigit = 0;

   if(iNo != 0)
   {
        iDigit = iNo%10;
        if(iNo > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo/10;
        Minimum(iNo);
   }
   return iMin;
}

int main()
{
  int iValue = 0;
  int iRet;

  printf("Enter the Number\n");
  scanf("%d",&iValue);

  iRet = Minimum(iValue);
    printf("Smallest Number are : %d\n",iRet);
    return 0;
}