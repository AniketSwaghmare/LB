//write a recursive program which display below pattern.
// 1  2  3  4 5


#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    static int k = 1;
   if(i<iNo)
    { 
         printf("%d\t",k);
             iNo--;
             k++;  
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