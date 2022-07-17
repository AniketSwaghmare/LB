//write a program which accept number from user and count frequency of 2 in it..

//Input : 12356
//Ouput: 1
//Input : 1018
//Output : 0



#include<stdio.h>

int CountTwo(int iNo)
{
    int iCount = 0;

    while(iNo>0)
    {
        if((iNo % 10)== 2)
        {
            iCount++;
        }
        iNo = iNo / 10;

    }
    return iCount; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d\n",iRet);
    return 0;
}
