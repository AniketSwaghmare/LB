//write genric program which accept N values and search last occurrence of any specific value

//Input :  10  20 30 10 30 40 10 40 10
// value to search 40
// Output : 8

#include<iostream>
using namespace std;

template<class T>

int Searchlast(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >=0; iCnt--)
    {
        if(arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}


int main()
{
    int iRet = 0;
   int arr[] = { 10,20,30,10,30,40,10,40,10};
   iRet = Searchlast(arr,9,40);
   cout<<"Last occurrence of  are : "<<iRet<<endl;
    return 0;
}