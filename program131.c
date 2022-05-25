#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int isum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        isum = isum +Arr[iCnt];
    }
    return isum;
}

int main()
{
    int iRet = 0;   
    int *ptr = NULL;
    int iLength = 0,iCnt = 0;
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);
    
    printf("Enter the values of array\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Summation(ptr,iLength);
    printf("Addition is : %d\n",iRet);

    
    return 0;
}