//Accept the string and count the Small characters..


#include<iostream>
using namespace std;

int countCapital(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
   iRet = countCapital(Arr);
   cout<<"Number of captal Characters are : "<<iRet<<endl;


    return 0;
}