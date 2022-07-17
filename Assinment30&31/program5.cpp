//write generic program to accept N values from user and return Smallest values.

#include<iostream>
using namespace std;

template<class T>
T Min(T arr[], int iSize)
{
    T Min = arr[0];
    int i = 0;
   

    for(i = 0; i < iSize; i++)
    {
       if(arr[i] < Min)
       {
            Min = arr[i];
       }
    }
   return Min;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {3.7,9.8,8.7};

    int iRet = Min(arr,5);
    cout<<"The Smallest Number are : "<<iRet<<endl;

    float fRet = Min(brr,3);
    cout<<"The Smallest Number are : "<<fRet<<endl;


    return 0;
}