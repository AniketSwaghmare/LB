//Accept the Number from user and check First Four bits On OR OFF
import java.lang.*;
import java.util.*;

class program313
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number");
      int iNo = sobj.nextInt();

      int iMask = 0X0000000f;
      int iResult = 0;

      iResult = iNo & iMask;

      if(iResult == iMask)
      {
         System.out.println("First niible is Completely ON");
      }
      else
      {
         System.out.println("First niible is OFF");
      }
   }
}