//write a recursive program which display below pattern.
// *   *   *   *   * 


#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    if(i<iNo)
    {
        printf("*\t");
        i++;
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