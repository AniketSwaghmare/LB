//write a recursive program which accept string from user and count number of characters.
//InPut : Hello
//OutPut : 5

#include<stdio.h>

int Strlen(char *str)
{
    static int Count = 0;

    if(*str != '\0')
    {
        Count++;
        str++;
        Strlen(str);
    }
    return Count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("Count is : %d\n",iRet);

    return 0;
}