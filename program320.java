//Accept two String from user and Check Whether First string is rotation of Second string or not check

import java.lang.*;
import java.util.*;

class program320
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter First String");
      String str1 = sobj.nextLine();

      System.out.println("Enter Rotated String");
      String str2 = sobj.nextLine();

      if(str1.length() != str2.length())        //Filter it checking string length is same or not
      {
         System.out.println("String are Not in Rotation");
         return;
      }

      String str3 = str1 + str2;

      if(str3.contains(str2))
      {
         System.out.println("Strings are in rotation");
      }

   }  
}