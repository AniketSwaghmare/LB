//write java program which accept N numbers from user and accept one another numberas NO, return index of first occurrence of that NO.
import java.lang.*;
import java.util.*;



class NumberX
{
    
    public int FirstOcc(int Arr[],int iNo)
    {
        int iCount = 0,i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                iCount++;
                break;
            }
        }
        return iCount;
    }
}


class program17
{
    public static void main(String arg[])
    {
        int iValue = 0,i = 0,iNo = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        System.out.println("Enter the Number That You Want Find");
        iNo = sobj.nextInt();

        int Arr[] = new int[iValue];
        System.out.println("Enter the Elements");
        for(i = 0; i< Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }


        NumberX obj = new NumberX();
         iRet = obj.FirstOcc(Arr,iNo);
        
         System.out.println("First Occurrence of Of Number Are :"+iRet);
    }
}