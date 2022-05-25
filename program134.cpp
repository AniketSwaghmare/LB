/*
    Input:
        iRow : 4
        iCol : 4

    *  *   *  *
    *  *   *  *
    *  *   *  *
    *  *   *  *
*/
#include<iostream>

using namespace std;

class pattern
{
    private:
    int iRow,iCol;

    public:
    pattern(int a,int b)
    {
        this->iRow = a;
        this->iCol = b;
    }

   void Display()
    {
        int i = 0,j = 0;

        for(i = 1; i <=iRow; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
    }

};

int main()
{
    pattern pobj(4,4);
    pobj.Display();


    return 0;
}