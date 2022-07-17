//Accept Number and that Number range of bits (start and end)  and off bit On
//00000000 00000000 00000000 00000000
//00000000 00000000 11111111 00000000  //Mask
import java.lang.*;
import java.util.*;

class program315
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number");
      long iNo = sobj.nextLong();

      System.out.println("Enter Starting Point");
      int iStart = sobj.nextInt();
      
      System.out.println("Enter Ending Point");
      int iEnd = sobj.nextInt();

      long iMask1 = 0xffffffff;
      long iMask2 = 0xffffffff;
      long iMask = 0;

      iMask1 = iMask1 <<(iStart-1);
      iMask2 = iMask2 >>(32-iEnd);

      iMask = iMask1 & iMask2;
      
      System.out.println(iMask);
      
      long iResult = 0;

      iResult = iNo & iMask;

      
      if(iResult == iNo)
      {
         System.out.println("Bits Are ON");
      }
      else
      {
         System.out.println("Bits Are OFF");
      }
   }
}