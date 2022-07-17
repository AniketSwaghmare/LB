//convert iterative to Recurstion

#include<stdio.h>

// Input : 123
//OutPut : 3 2 1

int DisplayI(int no)
{
   
    while(no != 0)
    {
        printf("%d\t",no % 10);
        no = no/10;
    }

}
int DisplayR(int no)
{
     if(no != 0)
    {
        printf("%d\t",no % 10);
        no = no/10;
        DisplayI(no);                // Recursion call
    }
    

}

int main()
{
    DisplayR(123);

    return 0;
}