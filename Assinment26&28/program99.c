//write a program which accept string from user and Accept one character Return index of first occurerence of that character.


//Input: "Marvellous Multi OS"
//          M
//Output: 0

//Input:    "Marvellous Multi OS"
//           w
//Output: -1

//Input: "Marvellous Multi OS"
//          e
//Output: 4


#include<stdio.h>
#include<string.h>

int FirstChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
       for(int i = 0; i< strlen(str); i++)
       {
          if(str[i] == ch)
        {
          iCnt++;
          break;
        }

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


    iRet = FirstChar(arr,cValue);

    printf("Character location is : %d",iRet);
    return 0;
}