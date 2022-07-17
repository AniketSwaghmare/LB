//write a recursive program which accept number from user and display below pattern
// 5 * 4 * 3 * 2 * 1 *
#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    static int k = 1;
    if(i < iNo)
    {
     printf("%d   * \t",k);
        k++;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
}