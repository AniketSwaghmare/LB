//Accept the string and count number of vowel..
//(case insestive)


#include<iostream>
using namespace std;

int countSpace(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);
   iRet = countSpace(Arr);
   cout<<"Number of vowel are : "<<iRet<<endl;


    return 0;
}