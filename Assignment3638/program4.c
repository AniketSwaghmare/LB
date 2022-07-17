//write a recursive program which display below pattern.
// A B C D E F


#include<stdio.h>

void Display(int iNo)
{
    static char Ch = 'A';
    if(0<= iNo)
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