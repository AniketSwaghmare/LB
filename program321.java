//Accept String from user and Count Frequence All Characterstic in it

import java.lang.*;
import java.util.*;

class program321
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String");
      String str = sobj.nextLine();

      char Arr[] = str.toCharArray();

      HashMap<Character,Integer>hobj = new HashMap<>();
      int Frequency = 0;
      for(char ch : Arr)      // this loop is called as for each loop.. // old loop for(int i = 0; i<Arr.length; i++)
      {
         if(hobj.containsKey(ch))
         {
            Frequency =hobj.get(ch);
            hobj.put(ch,Frequency + 1);
         }
         else
         {
            hobj.put(ch,1);
         }
      }
      System.out.println(hobj);
   }  
}