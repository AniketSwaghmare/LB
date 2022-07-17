//Accept String from user and Display frequency of each word

import java.lang.*;
import java.util.*;

class program323
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String");
      String str = sobj.nextLine();

      String Arr[] = str.split(" ");

      HashMap<String,Integer>hobj = new HashMap<>();
      int Frequency = 0;
      for(String ch : Arr)      // this loop is called as for each loop.. // old loop for(int i = 0; i<Arr.length; i++)
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

      Set<String>setobj = hobj.keySet();     // hey method fakt key kadun deth eka object madhe
      int iMax = 0;
      String c = " ";
      for(String value : setobj)      // one by one value kadun denar ahi
      {
           if(hobj.get(value) > iMax)
           {
            iMax = hobj.get(value);
            c = value;
           }
      }
      System.out.println(c+ " : Word occurs Maximum Number of times is : "+iMax);
   }  
}