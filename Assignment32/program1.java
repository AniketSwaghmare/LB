//write a program which accept one number and position from user and check whether bi at that position is on or off. 
//It bit is one return TRUE otherwise return FALSE.

import java.lang.*;
import java.util.*;

//   0000   0000   0000   0000   0000  0000 0000 0000
//     0       0    0       0       0    0     0    0
class Bitwise
{
    public Boolean ChkBit(int iNo,int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos-1);
        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }   
}
class program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        int iNo = sobj.nextInt();

        System.out.println("Enter the Position");
        int iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
       boolean bRet = bobj.ChkBit(iNo,iPos);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        
    }
}