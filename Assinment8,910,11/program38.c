//Accept N numbers from user and return the largest number..

#include<stdio.h>
 #include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{

    int Max = 0;
    int iCnt =0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] >Max)
        {
            Max = Arr[iCnt];
        }
       
    }
    return Max;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iSize);

    printf("The Lagrest Number : %d",iRet);
    return 0;
}