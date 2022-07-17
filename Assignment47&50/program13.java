//write java program which accept number from user and return the count digits in between 3 and 7

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountRange(int iNo)
    {
        int idigit = 0, iCnt = 0;
        int i = 0;  

        if(iNo == -iNo)
        {
            iNo = -iNo;
        }
        while(iNo != 0)
    {
        idigit = iNo % 10;
        if(idigit > 3 &&  idigit < 7)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
        return iCnt;
    }
   
}


class program13
{
    public static void main(String arg[])
    {
        
        int iNo = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number..");
        iNo = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountRange(iNo);
        System.out.println("count of Number in between 3 and 7 : "+iRet);
        
    }
}