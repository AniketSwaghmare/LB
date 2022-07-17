//write java program which accept number from user and return the count of even digits

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountEvent(int iNo)
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
        if(idigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
        return iCnt;
    }
   
}


class program11
{
    public static void main(String arg[])
    {
        
        int iNo = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number..");
        iNo = sobj.nextInt();

        Digit dobj = new Digit();
       int iRet = dobj.CountEvent(iNo);
        System.out.println("count of Even Number : "+iRet);
        
    }
}