//Accetp N number from user and return frequency of even number..

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0;iCnt<=iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iCount++;

        }
    }
    return iCount;
}

int main()
{
    int iSize =0,iRet =0,iCnt = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p,iSize);
    printf("Result is : %d",iRet);

    free(p);
    return 0;
}