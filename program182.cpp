//Accept the string and copy it string in another pointer



#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
       *dest = *src;
       src++;
       dest++;
   }
   *dest = '\0';
}

int main()
{
    char Arr[20];               //Bharaleli wahi
    char Brr[20];              // Kori wahi
    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);
    strcpyX(Arr,Brr);
   cout<<"String After Copy : "<<Arr<<endl;


    return 0;
}