
// Accept two string from user and Check whether that string's is Anagram or not
import java.io.*;
import java.util.*;

class program289 {
   public static void main(String arg[]) {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter First the String");
      String str1 = sobj.nextLine();

      str1 = str1.toLowerCase(); // Accepted String convert Uppercase to lowercase
      char arr[] = str1.toCharArray();

      int Frequency1[] = new int[26];

      System.out.println("Enter Second the String");
      String str2 = sobj.nextLine();
      str2 = str2.toLowerCase();

      char brr[] = str2.toCharArray();
      int Frequency2[] = new int[26];

      if (str1.length() != str2.length()) // this is filter its check two string length are same or not
      {
         System.out.println("String are not anagram as lengths are different's");
         return;
      }
      int i = 0;

      for (i = 0; i < arr.length; i++) {
         Frequency2[brr[i] - 'a']++;
         Frequency1[arr[i] - 'a']++;
      }

      for (i = 0; i < Frequency1.length; i++) {
         if (Frequency1[i] != Frequency2[i]) { // jr Freq1 vr madhla index freq2 madhla jr same nasle tr break karle
            break;
         }
      }
      if (i == 26) {
         System.out.println("String are anagram");
      } else {
         System.out.println("String are Not Anagram");
      }
   }
}