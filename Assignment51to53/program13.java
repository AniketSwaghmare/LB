//write java program which accept number of rows and number of columns ffrom user and display below pattern.

/*
5  4  3  2  1 
5  4  3  2  1 
5  4  3  2  1 
 */
import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(int iRow,int iCol)
    {   
        int i = 0, j = 0;

        for(i = 1; i<= iRow; i++)
        {
          for(j = iCol; j>0; j--)
          {
            System.out.print(j+"\t");
          }
          System.out.println();
        }
    }
}
class program13
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