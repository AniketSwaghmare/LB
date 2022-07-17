//Accept the Number from user and check wether 3rd Number bit is On or OFF

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
       int iMask = 4;
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

class program188
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