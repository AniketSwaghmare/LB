//Accept one Character from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char Cvalue)
{
    char ch;
    if(Cvalue>= 97 && Cvalue <= 122)
    {
        Cvalue = Cvalue-32;
        printf("\nUppercase of Enterd character is %c",Cvalue);
        
    }
    else
    {
        Cvalue = Cvalue+32;
        printf("\nLowwercase of Entered character is %c",Cvalue);
    }

}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);


    return 0;
}