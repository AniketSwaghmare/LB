import java.lang.*;
import java.util.*;

//input 78956
/*
 7 8 9 5 6
 7 8 9 5
 7 8 9 
 7 8
 7

 */

class program311 {

   public static void main(String arg[]) {
      int i = 0, j = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Numnber");
      int no = sobj.nextInt();

      char Arr[] = (Integer.toString(no)).toCharArray();

      for (i = Arr.length - 1; i >= 0; i--) {
         for (j = 0; j < i; j++) {
            System.out.print(Arr[j] + " ");
         }
         System.out.println();
      }
   }
}