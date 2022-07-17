//write a program which accept string from user and Check whether it contains vowels in it or not
//Input : "Marvellous "
//OutPut : TRUE

//Input :  "Demo"
//OutPut:  TRUE

//Input :   "xyz"
//OutPut:  FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkVowel(char *str)
{

    while(*str != '\0')
    {
        if((*str== 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
       
        str++;
    }

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    bRet = chkVowel(arr);
    if(bRet == TRUE)
    {
        printf("There is contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}