
//Accept String form user and display Maximum occurenance character and position
import java.io.*;
import java.util.*;

class program286 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String");
      String str = sobj.nextLine();

      str = str.toLowerCase(); // Accepted String convert Uppercase to lowercase
      char arr[] = str.toCharArray();

      int Frequency[] = new int[26];

      int i = 0;
      for (i = 0; i < arr.length; i++) {
         Frequency[arr[i] - 'a']++; // arr[i] mhnje 0 index madhi tyo 97 - karnar ani index madhla count 1 hoil ani
                                    // vaps tyo character bethla tr tyo count vaps vadhto
      }

      int iMax = 0;
      int iPos = 0;

      for (i = 0; i < Frequency.length; i++) {

         if (Frequency[i] > iMax) {
            iMax = Frequency[i];
            iPos = i;
         }
      }
      System.out.println((char) (iPos + 'a') + " occurs : " + iMax + " number of times in the word");
   }
}