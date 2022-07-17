//Accept two Number from user and Display the Common bits
//00000000 00000000 00000000 00000000
//00000000 00000000 11111111 00000000  //Mask
import java.lang.*;
import java.util.*;

class program316
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number");
      int iNo = sobj.nextInt();

      int iMask = 0x000000001;
      int iResult = 0;
      for(int i = 1; i<= 32; i++)
      {
         iResult = iNo & iMask;

         if(iResult == iMask)
         {
            System.out.println(i);
         }
         iMask = iMask << 1;
      }
      
   }
}