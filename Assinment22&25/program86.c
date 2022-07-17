//Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//input:  A
//output: Decimal 65
// octal 0101
// Hexadecimal 0X41

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 

typedef int BOOL;

void Display(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            printf("Decimal : %d\n",ch);
            printf("octal : %o\n",ch);
            printf("Hexadecimal Value : %x\n",ch);
        }
        ch++;
        ch = '\0';
    }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);

   Display(cValue);

   
    return 0;
}