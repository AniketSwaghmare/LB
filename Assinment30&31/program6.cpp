//write genric program which accept one value and one numer from user. print that value that number of times o screen.

//Input : M 7
// Output : M M M M M M M
//Input : 11 3
//Output : 11 11 11
#include<iostream>
using namespace std;

template<class T>

void Display(T value, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}