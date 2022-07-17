//Accept the Number from user and check First Four bits On OR OFF
import java.lang.*;
import java.util.*;

class program314
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number");
      int iNo = sobj.nextInt();

      long iMask = 0X0f00000f;
      long iResult = 0;

      iResult = iNo & iMask;

      if(iResult == iMask)
      {
         System.out.println("First niible and last nibble Completely ON");
      }
      else
      {
         System.out.println("First niible and last nibble is OFF");
      }
   }
}