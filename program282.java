
//Accept String form user and and Reverse each word and concate string
import java.io.*;
import java.util.*;

class program282 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String");
      String str = sobj.nextLine();

      String newstr = str.replaceAll("\\s+", " "); // eka peksha jaast white space aasle tr tyala single white space //

      String newstr2 = newstr.trim(); // Starting and end white space remover
      String arr[] = newstr2.split(" ");

      StringBuffer finalstr = new StringBuffer();

      for (int i = 0; i < arr.length; i++) {

         StringBuffer sb = new StringBuffer(arr[i]);
         finalstr.append(sb.reverse()).append(" "); // word reverser kel ani StringBuffer sobt concte kel with white
                                                    // space but string cha last la ek extra whie space yetoy
      }

      String finalstr2 = new String(finalstr); // StringBuffer cha object pass kela String la ani last cha extra white
                                               // space trim kela
      System.out.println(finalstr2.trim());
   }
}