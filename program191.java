//Accept the Number from user and check wether 21 Number bit is On or OFF

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
       int iMask =0X00100000;                          ///1048576;
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

class program191
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
      

        boolean bRet = bobj.CheckBit(value);

        if(bRet == true)
        {
            System.out.println("Bit is oN");

        }
        else
        {
            System.out.println("Bit is oFF");
        }
    }   
}