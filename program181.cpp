//Accept the string and toggle the case of  that string
//(case insestive)


#include<iostream>
using namespace std;

void strtoglX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);
    strtoglX(Arr);
   cout<<"String After toggle are : "<<Arr<<endl;


    return 0;
}