//write genric program which accept N values and count frequency of any specific value

//Input :  10  20 30 10 30 40 10 40 10
// value to check frequency 10
// Output : 4

#include<iostream>
using namespace std;

template<class T>

int  Frequency(T *arr, int iSize, T iNo)
{
    int Count = 0;
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
   int arr[] = {10,20,30,10,30,40,10,40,10};
   int iRet = Frequency(arr,9,10);
   cout<<"Frequency of 10 are : "<<iRet<<endl;
    return 0;
}