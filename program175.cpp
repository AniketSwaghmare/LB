//Accept the string and count the White Space..


#include<iostream>
using namespace std;

int countSpace(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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
   cout<<"Number of white space are : "<<iRet<<endl;


    return 0;
}