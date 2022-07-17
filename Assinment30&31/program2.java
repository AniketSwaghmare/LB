//write a program which checks whether 5th & 18th bit is on or OFF

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0010  0100  0000  0000  0000
//  0       0       0   2      4    0       0   0
class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask = 0X00024000;         //131088
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

class program2
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