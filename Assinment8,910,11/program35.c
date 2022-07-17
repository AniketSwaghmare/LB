//Accept N numbers from user and accept one another nuer as NO,Check whter No is present or not..

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

    }
}

int main()
{
    int iSize = 0,iCnt =0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter nuber of elements\n");
    scanf("%d",&iSize);

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize*sizeof(int));

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

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }
    free(p);
}