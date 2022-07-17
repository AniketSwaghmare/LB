//Accept the Number from user and toggle the number bit (ON aasle tr OFF ani OFF aasel tr ON)

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0000  1000
//    0    0      0      0    0    0      0     8          //hexadecimal converting
class Bitwise
{
    public int OnBit(int iNo)
    {
       int iMask =0X00000008;                          //8
       int iResult = 0;

       iResult = iNo^iMask;
       return iResult;
       

    }
}

class program195
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