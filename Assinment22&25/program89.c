//write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
//Input : "Marvellous "
//OutPut : 9 (8-2)


#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int No = 0,iNo = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            No++;
        }
         else if((*str >= 'a') && (*str <= 'z'))
        {
            iNo++;
        }
        str++;  
       
    }
    return No - iNo;
}


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);
    return 0;
}