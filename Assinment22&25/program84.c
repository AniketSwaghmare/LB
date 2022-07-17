//Accept character from user. If character is small display its corresponding capital character, and if it small then display
//its corresponding capital. In other cases display as it is.
//Input : Q
//Output : q

//Input : q
//output:Q

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    while(ch != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            ch = ch + 32;
            printf("%c",ch);
        }
       else if((ch >= 'a') && (ch <= 'z'))
        {
            ch = ch - 32;
            printf("%c",ch);
        }
        ch++;
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