//write generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;

template<class T>
T Max(T arr[], int iSize)
{
    T Max = arr[0];
    int i = 0;
   

    for(i = 0; i < iSize; i++)
    {
       if(arr[i] > Max)
       {
            Max = arr[i];
       }
    }
   return Max;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<"The Largest Number are : "<<iRet<<endl;

    float fRet = Max(brr,3);
    cout<<"The Largest Number are : "<<fRet<<endl;


    return 0;
}