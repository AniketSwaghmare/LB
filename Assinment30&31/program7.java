//write a program which accept one number from user and off 7th & 10th bit of that number if it is on. return modified number


import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0010  0100  0000
//  0       0      0    0      0    2      4   0

class Bitwise
{
    public int OffBit(int iNo)
    {
        int iMask =0X00000240;      //576
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;

    }
}

class program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        
        int iRet = bobj.OffBit(iValue);

        System.out.println("Update Number is : "+iRet);


    }
}