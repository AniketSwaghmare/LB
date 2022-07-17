//write a program which accept string from user and display it inn reverse order.
//Input : "Marvellous "
//OutPut : "suollevraM"

#include<stdio.h>


void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("String After Reverse : %s",str);
}

int main()
{
    char arr[20];
   

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
   
   
    return 0;
}