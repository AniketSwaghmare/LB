//Accept number from user and display below pattern.
//A B C D E

#include<stdio.h>

void Pattern(int iNo)
{
    char CValue = '\0';
    int i = 0;

    for(i = 1,CValue = 'A';i<=iNo;i++,CValue++)
    {
        printf("%c\t",CValue);
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}