import java.lang.*;
import java.util.*;

//input
/*
 H
 H E
 H E L
 H E L L
 H E L L O
 H E L L O
 H E L L
 H E L
 H E
 H
 */

class program308 {

   public static void main(String arg[]) {
      int i = 0, j = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String");

      String str = sobj.nextLine();

      char Arr[] = str.toCharArray();

      for (i = 0; i < Arr.length; i++) {

         for (j = 0; j <= i; j++) {
            System.out.print(Arr[j] + " ");
         }
         System.out.println();
      }

      for (i = Arr.length - 1; i >= 0; i--) {
         for (j = 0; j <= i; j++) {
            System.out.print(Arr[j] + " ");
         }
         System.out.println();
      }
   }
}