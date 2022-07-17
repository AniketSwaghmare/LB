//Accept the Number from user and toggle the number bit 7 and 8

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0100  1000
//    0    0      0      0    0    0      4     8          //hexadecimal converting
class Bitwise
{
    public int OnBit(int iNo)
    {
       int iMask =0X00000078;                          
       int iResult = 0;

       iResult = iNo^iMask;
       return iResult;
       

    }
}

class program196
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.OnBit(value);

        System.out.println("Update Number is : "+iRet);
    }   
}