//Accept N Number form user and Display its Addition.

#include<iostream>
using namespace std;

class ArrayX
{
    private :
    int *Arr;
    int iSize;
    
    public:
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];       //Resource...
        }
        ~ArrayX()
        {
            delete[]Arr;

        }

    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the Element"<<endl;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        int iCnt = 0;

        cout<<"Elements of Array are "<<endl;
        for(iCnt = 0; iCnt<<iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<endl;
        }
    }

    int Summation()
     {
       int isum = 0;
       int iCnt = 0;

       for(iCnt = 0; iCnt <iSize; iCnt++)
       {
          isum = isum +Arr[iCnt];
       }
          return isum;
    }
};

int main()
{
    int iRet = 0;

    ArrayX obj1(5);
    obj1.Accept();  
    obj1.Display();

    iRet = obj1.Summation();

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}