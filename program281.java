
//Accept String form user and and Reverse each word of a string of a place
import java.io.*;
import java.util.*;

class program281 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String");
      String str = sobj.nextLine();

      String newstr = str.replaceAll("\\s+", " "); // eka peksha jaast white space aasle tr tyala single white space //

      String newstr2 = newstr.trim(); // Starting and end white space remover
      String arr[] = newstr2.split(" ");

      for (int i = 0; i < arr.length; i++) {

         StringBuffer sb = new StringBuffer(arr[i]);
         System.out.println(sb.reverse());
      }
   }
}