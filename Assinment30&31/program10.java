//write a program which accept one number from user and on its first 4 bits return modified number.

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0000  1000
//  0       0      0    0      0    0      0   8

class Bitwise
{
    public int onBit(int iNo)
    {
        int iMask =0X00000008;  //8
        int iResult = 0;

        iResult = iNo | iMask;
        return iResult;

    }
}

class program10
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        
        int iRet = bobj.onBit(iValue);

        System.out.println("Update Number is : "+iRet);


    }
}