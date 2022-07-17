//write a program which accept one number and position from user and toggle that bit. Return modified number
//Input : 10 3
//Output : 14

import java.lang.*;
import java.util.*;

//   0000   0000   0000   0000   0000  0000 0000 0000
//     0       0    0       0       0    0     0    0
class Bitwise
{
    public int toggleBit(int iNo,int iPos)
    {
        if((iPos <= 0) || (iPos > 32))
        {
            System.out.println("Invaild Position..");
            return 0;
        }
        
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos-1);

        iResult = iNo ^ iMask;
        return iResult;
       
    }   
}
class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number");
        int iNo = sobj.nextInt();

        System.out.println("Enter the Position");
        int iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.toggleBit(iNo,iPos);

      System.out.println("Modifier Number is : "+iRet);
      

        
    }
}