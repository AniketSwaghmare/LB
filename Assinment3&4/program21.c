//Accept on character fromuser and check whether that character is vowel(a,b,i,o,u) or not..

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char ch)
{
    if(ch>= 97 && ch<= 122)
    {
        ch = ch-32;
        return 1;

    }
    
    else
    {
        ch = ch+32;
        return 0;

    }
}

int main()
{
    char cValue = '\0';
    bool bRet =FALSE;

    printf("Enter characters\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is a not vowel\n");
    }
    return 0;
}