////Accetp N number from user and accept one another number as No,return index of last occurrence of that No..

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength -1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }


}

int main()
{
    int iSize =0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    
    p = (int*)malloc(iSize*sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocated Memory\n");
        return -1;
    }
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("ENter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last Occurrence of number is %d",iRet);
    }
    free(p);

        return 0;
}