//write java program which accept number from user and return Multiplication of all digits

import java.lang.*;
import java.util.*;

class Digit
{
    public int Multiply(int iNo)
    {
        int idigit = 0, iCnt = 0;
        int iMulti = 1;  

        if(iNo == -iNo)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            idigit = iNo%10;
            iMulti = iMulti*idigit;
            iNo = iNo/10;
        }
        return iMulti;
    }
   
}


class program14
{
    public static void main(String arg[])
    {
        
        int iNo = 0;
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number..");
        iNo = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.Multiply(iNo);
        System.out.println("Multiplication Of Digit : "+iRet);
        
    }
}