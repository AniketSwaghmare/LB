//write a recursive program which display below pattern.
// 5  4  3  2  1


#include<stdio.h>

void Display(int iNo)
{
    
    if(0<iNo)
    {
         
         printf("%d\t",iNo);
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