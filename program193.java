//Accept the Number from user and On 4 number bit on..

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0000  1000
//    0    0      0      0    0    0      0     1           //hexadecimal converting
class Bitwise
{
    public int OnBit(int iNo)
    {
       int iMask =0X00000008;                          //8
       int iResult = 0;

       iResult = iNo | iMask;
       return iResult;
       

    }
}

class program193
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();

       int iRet = bobj.OnBit(value);

        System.out.println("Updated number is : "+iRet);
    }   
}