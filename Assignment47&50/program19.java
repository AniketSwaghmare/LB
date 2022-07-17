//write java program which accept N numbers from user and accept range,Display all elements from that range
import java.lang.*;
import java.util.*;



class NumberX
{
    public void Display(int Arr[],int iStart, int iEnd)
    {
        int i = 0;
        System.out.println("Number Are : ");
        for(i = 0; i<Arr.length; i++)
        {
            if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
            {
                System.out.println(Arr[i]);
            }
        }
    }
}


class program19
{
    public static void main(String arg[])
    {
        
   
        
        int iValue = 0,i = 0,iStart = 0,iEnd = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        System.out.println("Enter the  Start Number");
        iStart = sobj.nextInt();

        System.out.println("Enter the End Number");
        iEnd = sobj.nextInt();


        int Arr[] = new int[iValue];
        System.out.println("Enter the Elements");
        for(i = 0; i< Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        NumberX obj = new NumberX();
        obj.Display(Arr,iStart,iEnd);
       
    }
}