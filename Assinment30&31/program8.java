//write a program which accept one number from user and toggle 7th bit of that number. return modified number


import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0100  0000
//  0       0      0    0      0    0      4   0

class Bitwise
{
    public int toggleBit(int iNo)
    {
        int iMask =0X00000040;      //576
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;

    }
}

class program8
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        
        int iRet = bobj.toggleBit(iValue);

        System.out.println("Update Number is : "+iRet);


    }
}