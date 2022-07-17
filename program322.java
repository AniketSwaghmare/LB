//Accept String from user and Display such Occurase characters
// in this code travels added
import java.lang.*;
import java.util.*;

class program322
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

      Set<Character>setobj = hobj.keySet();     // hey method fakt key kadun deth eka object madhe
      int iMax = 0;
      char c = ' ';
      for(char value : setobj)      // one by one value kadun denar ahi
      {
           if(hobj.get(value) > iMax)
           {
            iMax = hobj.get(value);
            c = value;
           }
      }
      System.out.println(c+ " : occurs Maximum Number of times is : "+iMax);
   }  
}