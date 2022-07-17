//write a program which displays ASCII table. Table contains symbol,decimal,Hexadecimal and octal representation of every Member from 0 to 255



#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
   int i = 0;
   printf("Deci, Hexa, octal,char \n");
   for(i = 0; i <= 255;i++)
   {
       printf("%d  %x  %o  %c \n",i,i,i,i);
   }
    
}

int main()
{

    DisplayASCII();
    return 0;
}