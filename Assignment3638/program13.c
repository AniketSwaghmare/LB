//write a recursive program which accept string from user and count number of small characters
// Input : HElloWorID
// OutPut : 5

#include<stdio.h>

int SmallChar(char *str)
{
   static int iCount = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        SmallChar(str);
    }
    return iCount;
}
int main()
{
    char cValue[30];
    int iRet = 0;

    printf("Enter the String..\n");
    scanf(" %[^'\n']s",cValue);

    iRet = SmallChar(cValue);
    printf("The Count of Small Characters is : %d\n",iRet);

    return 0;
}