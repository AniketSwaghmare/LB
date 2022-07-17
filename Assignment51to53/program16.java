//write java program which accept number of rows and number of columns ffrom user and display below pattern.
//Hello
/*
  H e l l o
  H e l l o
  H e l l o
  H e l l o

 */
import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(String str)
    {   
      int i = 0, j = 0;
      char Arr[] = str.toCharArray();

      for(i = 0; i<Arr.length; i++)
      {
        for(j = 0; j<Arr.length; j++)
        {
          System.out.print(Arr[j]+" ");
        }
        System.out.println();
      }
        
    }
}
class program16
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