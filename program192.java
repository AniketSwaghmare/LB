//Accept the Number from user and check wether 14 Number bit is On or OFF

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0010  0000  0000  0000
//    0    0      0      0    2    0      0     0           //hexadecimal converting
class Bitwise
{
    public boolean CheckBit(int iNo)
    {
       int iMask =0X00002000;                          //8192
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

class program192
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