//write a recursive program which accept string from user and count white spaces.
// Input : HE llo WOr ID
// OutPut : 3.

#include<stdio.h>

int WhiteSpace(char *str)
{
  static int iCount = 0;
  if(*str != '\0')
  {  
    if(*str == ' ')
    {
        iCount++;
        
    }
     WhiteSpace(str+1);
 }
    return iCount;
}

int main()
{
    char cValue[30];
    int iRet;
    printf("Enter the String..\n");
    scanf(" %[^'\n']s",cValue);

    iRet = WhiteSpace(cValue);

    printf("The Count of White Space is : %d\n",iRet);
    return 0;
}