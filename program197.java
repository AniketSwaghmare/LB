//Accept the Number from user and toggle the number bit 7 and 8

import java.lang.*;
import java.util.*;
//  0000  0000   0000  0000  0000  0000  0000  0000
//    0    0      0      0    0    0      0     0          //hexadecimal converting
class Bitwise
{
    public int ToggleBit(int iNo,int iPos)
    {
        if((iPos <= 0) || (iPos > 32))
        {
            System.out.println("Invaild Position");
            return 0;
        }
       int iMask = 0X00000001;                          
       int iResult = 0;

      iMask = iMask << (iPos-1); 
      
      iResult = iNo ^ iMask;
       return iResult;
       

    }
}

class program197
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);


        System.out.println("Enter Number");
        int value1 = sobj.nextInt();

        System.out.println("Enter Position");
        int pos = sobj.nextInt();


        Bitwise bobj = new Bitwise();

        int iRet = bobj.ToggleBit(value1,pos);

        System.out.println("Update Number is : "+iRet);
    }   
}