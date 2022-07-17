//write java program which accept number of rows and number of columns ffrom user and display below pattern.

/*
 4  4  4  4  4  4
 3  3  3  3  3  3
 2  2  2  2  2  2
 1  1  1  1  1  1
 */
import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(int iRow,int iCol)
    {   
        
        int i = 0,j = 0;

        for(i = iRow; i> 0; i--)
        {
          for(j = 0; j< iCol; j++)
          {
            System.out.print(i+"\t");
          }
          System.out.println(); 
        }

        
        
    }
}
class program9
{
    public static void main(String arg[])
    {
        pattern obj = new pattern();
        Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Row Number..");
        int iValue = sobj.nextInt();

        System.out.println("Enter the Columns Number...");
        int iValue2 = sobj.nextInt();

        obj.pattern(iValue,iValue2);
    }
}