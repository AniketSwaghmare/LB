//write a program which accept string from user and convert it into lower case.

//Input : "Marvellous Multi OS"
// OutPut : "marvellous multi os"

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    printf("Modified String is : %s",arr);
    return 0;
}