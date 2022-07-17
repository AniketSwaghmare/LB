
//Accept String form user and and Display Maximum count of word
import java.io.*;
import java.util.*;

class program279 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String");
      String str = sobj.nextLine();

      String newstr = str.replaceAll("\\s+", " "); // eka peksha jaast white space aasle tr tyala single white space //
                                                   // madhi convert krto
      String newstr2 = newstr.trim(); // Starting and end white space remover
      String arr[] = newstr2.split(" ");

      int iMax = 0;
      for (int i = 0; i < arr.length; i++) {

         if (arr[i].length() > iMax) {
            iMax = arr[i].length();
         }
      }
      System.out.println("Length of Largest Word is : " + iMax);
   }
}