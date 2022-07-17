//Accept String form user and Count the word

import java.io.*;
import java.util.*;

class program276 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String");
      String str = sobj.nextLine();

      String arr[] = str.split(" ");
      System.out.println("Number of Word is : " + arr.length);
   }
}