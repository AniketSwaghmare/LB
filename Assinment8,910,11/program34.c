//Accept N number from user and accept one another number as NO,return frequency of NO form it..

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount= 0;

    for(iCnt = 0;iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0,iREt = 0,iCnt =0,iRet =0,iValue = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize,iValue);
    
        printf("%d",iRet);
    free(p);

    return 0;
}