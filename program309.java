import java.lang.*;
import java.util.*;

//input 78956
/*
 7 8 9 5 6
 7 8 9 5 6
 7 8 9 5 6
 7 8 9 5 6
 7 8 9 5 6

 */

class program309 {

   public static void main(String arg[]) {
      int i = 0, j = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Numnber");
      int iValue = sobj.nextInt();

      String str = Integer.toString(iValue);
      char Arr[] = str.toCharArray();

      for (i = 0; i < Arr.length; i++) {
         for (j = 0; j < Arr.length; j++) {
            System.out.print(Arr[j] + " ");
         }
         System.out.println();
      }
   }
}