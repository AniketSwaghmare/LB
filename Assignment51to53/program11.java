//write java program which accept number of rows and number of columns ffrom user and display below pattern.

/*
 *  *  *  *
 *  *  *  *
 *  *  *  *
 */
import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(int iRow,int iCol)
    {   
        int i = 0, j = 0;

        for(i = 0; i< iRow; i++)
        {
          for(j = 0; j< iCol; j++)
          {
            System.out.print("*"+"\t");
          }
          System.out.println();
        }
    }
}
class program11
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