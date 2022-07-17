import java.lang.*;
import java.util.*;

//input
/*
 O O O O O
 L L L L
 L L L
 E E
 H
 */
class program307 {

   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String");

      String str = sobj.nextLine();

      char Arr[] = str.toCharArray();

      for (int i = Arr.length - 1; i >= 0; i--) {
         for (int j = 0; j <= i; j++) {
            System.out.print(Arr[i] + " ");
         }
         System.out.println();
      }
   }
}