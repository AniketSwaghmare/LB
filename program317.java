//Accept Number from user and Count Number of ON bits and Display
//00000000 00000000 00000000 00000000
//00000000 00000000 11111111 00000000  //Mask
import java.lang.*;
import java.util.*;

class program317
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number");
      int iNo = sobj.nextInt();

      int iMask = 0x000000001;
      int iResult = 0;
      int iCnt = 0;
      for(int i = 1; i<= 32; i++)
      {
         iResult = iNo & iMask;

         if(iResult == iMask)
         {
           iCnt++;
         }
         iMask = iMask << 1;
      }
         System.out.println("Number of On bits Are : "+iCnt);
   }
}