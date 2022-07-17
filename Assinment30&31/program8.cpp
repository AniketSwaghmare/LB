//write genric program which accept N values and search first occurrence of any specific value

//Input :  10  20 30 10 30 40 10 40 10
// value to search 40
// Output : 6

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T arr[], int iSize, T iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt != iSize)
    {
       return iCnt;
    }
   
}


int main()
{
    int iRet = 0;
   int arr[] = {10,20,30,10,30,40,10,40,10};
   iRet = SearchFirst(arr,9,20);
   cout<<"First occurrence of  are : "<<iRet<<endl;
    return 0;
}