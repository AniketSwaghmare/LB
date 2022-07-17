//write generic program to accept N values from user and return addition of that values

#include<iostream>
using namespace std;

template<class T>
T AddN(T arr[], int iSize)
{
    T Sum;
    int i = 0;
   

    for(i = 0; i<=iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}
int main()
{
     float fSum = 0.0;
      int iSum = 0;

   int arr[] = {10,20};
    float brr[] = {10.0,3.7};


    iSum = AddN(arr,2);
    cout<<iSum<<endl;

     fSum = AddN(brr,2);
    cout<<fSum<<endl;


    return 0;
}