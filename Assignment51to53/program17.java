//write java program which accept number of rows and number of columns ffrom user and display below pattern.
//Hello
/*
  H e l l o
  H e l l
  H e l
  H e
  H

 */
import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(String str)
    {   
      int i = 0, j = 0;
      char Arr[] = str.toCharArray();

      for(i = Arr.length -1; i>= 0; i--)
      {
        for(j = 0; j<= i; j++)
        {
          System.out.print(Arr[j]+" ");
        }
        System.out.println();
      }
        
    }
}
class program17
{
    public static void main(String arg[])
    {
        pattern obj = new pattern();
        Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String..");
        String svalue = sobj.nextLine();

       
        obj.pattern(svalue);
    }
}