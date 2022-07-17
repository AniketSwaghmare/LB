//write java program which accept number from user and return difference between summation of even digits and summation of odd digits

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountDiff(int iNo)
    {
        int idigit = 0, iSum1 = 0,iSum2 = 0;
        int i = 0;  

        if(iNo == -iNo)
        {
            iNo = -iNo;
        }
        while(iNo != 0)
    {
        idigit = iNo % 10;
        if(idigit % 2 == 0)
        {
            iSum1 = iSum1+idigit;
        }
        else
        {
            iSum2 = iSum2+idigit;
        }
        iNo = iNo/10;
    }
        return iSum1 - iSum2;
    }
   
}


class program15
{
    public static void main(String arg[])
    {
        
        int iNo = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number..");
        iNo = sobj.nextInt();

        Digit dobj = new Digit();
       int iRet = dobj.CountDiff(iNo);
        System.out.println("Difference between Summation of Even number and odd number : "+iRet);
        
    }
}