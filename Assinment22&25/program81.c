//Accept division of student from user and depends on the division display exam timeig. There are 4 division in school as A,B,C,D.
//Exam of divison A at 7 Am, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM..
//Input: C
//OutPut: Your Exam at 9.20 Am
//Input: d
//OutPut: Your Exam at 10.30 Am.


#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char ChDiv)
{

     switch(ChDiv)
   {
       case 'A':
       
           printf("Your Exam is : 7 Am.\n");
           break;
       case 'B':
           printf("Your Exam is : 8.30 Am.\n");
           break;
       
       case 'C':
           printf("Your Exam is : 9.20 AM\n");
           break;
  
      case 'D':
           printf("Your Exam is : 10.30 AM\n");
           break;

        default:
           printf("Invaild Division\n");
           break;
       
       ChDiv++;
   }
}

int main()
{
    char cValue = '\0';
   

    printf("Enter Your Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}