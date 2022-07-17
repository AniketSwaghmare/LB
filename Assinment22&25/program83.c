//Accept character from user. if it is capital then display all the characters from the input characters till Z. if input character is small then 
//print all the characters in reverse order till a. In other cases return directly
//Input : Q
//Output : Q R S T U V W X Y Z

//Input : m
//output:  m l k j i h g f e d c b a

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    while(ch != '\0')
    {
        int i = '\0';
        if((ch >= 'A') && (ch <='Z'))
        {
            for(i = ch;i<='Z';i++)
            {
                printf("%c",i);
            }
        }
        else if((ch>='a') && (ch <= 'z'))
        {
            for(i = ch;i>='a';i--)
            {
                printf("%c",i);
            }
        }
      ch = '\0';
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}