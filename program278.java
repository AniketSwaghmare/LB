//Accept String form user and Replace double white space into single white space

import java.io.*;
import java.util.*;

class program278 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String");
      String str = sobj.nextLine();

      String newstr = str.replaceAll("\\s+", " "); // eka peksha jaast white space aasle tr tyala single white space //
                                                   // madhi convert krto
      String newstr2 = newstr.trim(); // Starting and end white space remover
      String arr[] = newstr2.split(" ");

      System.out.println("Number of Word is : " + arr.length);
   }
}