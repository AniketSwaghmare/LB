//write a program which checks whether 7th & 15th & 21st & 28th bit is on or OFF

import java.lang.*;
import java.util.*;
//  0000  1000   0001  0000  0100  0000  0100  0000
//  0       8      1    0      4    0      4   0
class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask =0X08104040;         //135282704
        int iResult = 0;

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

class program3
{
    public static void main(String a[])
    {   
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = bobj.ChkBit(iValue);

        if(bRet == true)
        {
            System.out.println("Bit is On");
        }
        else
        {
            System.out.println("Bit is OFF");
        }

    }
}