//Accept N numbers from user and return the difference between largest and smallest number..

#include<stdio.h>
 #include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[],int iLength)
{

    int Min;
    int iCnt =0,Max = 0,idiff = 0;

    for(iCnt =0;iCnt<=iLength;iCnt++)
    {
       for(iCnt =0;iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
       
    }

     for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] >Max)
        {
            Max = Arr[iCnt];
        }
       
    }
    }
    idiff = Min - Max;

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
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("The Difference is : %d",iRet);
    return 0;
}