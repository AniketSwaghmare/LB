//write a recursive program which display below pattern.
// a b c d e f


#include<stdio.h>

void Display(int iNo)
{
    static char Ch = 'a';

    if(0<=iNo)
    {
        printf("%c\t",Ch);
        Ch++;
        iNo--;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number that you want Star\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}