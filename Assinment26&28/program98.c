//write a program which accept string from user and Accept one character Return Frequency of that Character


//Input: "Marvellous Multi OS"
//          M
//Output: 2

//Input:    "Marvellous Multi OS"
//           w
//Output: 0

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
       if(*str == ch)
      {
        iCnt++;

      }
        str++;
    }
    return iCnt;
}

int main()
{
    char cValue = '\0';
    char arr[20];
    int iRet = 0;

    printf("Enter string..\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character\n");
    scanf("%s",&cValue);


    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);
    return 0;
}