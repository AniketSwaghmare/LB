//Accept the Number from user and On 27 number bit on..

import java.lang.*;
import java.util.*;
//  0000  0100   0000  0000  0000  0000  0000  0000
//    0    4      0      0    0    0      0     0          //hexadecimal converting
class Bitwise
{
    public int OnBit(int iNo)
    {
       int iMask =0X04000000;                          //8
       int iResult = 0;

       iResult = iNo | iMask;
       return iResult;
       

    }
}

class program194
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