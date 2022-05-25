//write a program which Accept Number from user and Display its Factorial..
//Input : 4.
//OutPut : 24.

#include<iostream>

using namespace std;

class Number
{
    private:
        int iNo;
public:

    void Accept()       //setter
    {
        cout<<"Enter the Value : "<<endl;
        cin>>this->iNo;
    }

    void Display()      //Getter
    {
        cout<<"Value is :"<<this->iNo<<endl;
    }


    int Factorial()
    {
    int iFact = 1;
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
    }
};

int main()
{
    Number nobj;
    int iRet = 0;
    nobj.Accept();
    nobj.Display();
    iRet = nobj.Factorial();

    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}