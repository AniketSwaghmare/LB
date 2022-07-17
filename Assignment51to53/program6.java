//write java program which accept number of rows and number of columns from user and display below pattern.

import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(int iRow,int iCol)
    {   
        int i = 0,j = 0;
        char ch= '\0',ch2 = '\0';


        for(i = 1,ch = 'A'; i<= iRow; i++,ch++)
        {
            for(j = 1,ch2 = 'A'; j <= iCol; j++,ch2++)
            {
                System.out.print(ch2+"\t");
            }
            System.out.println();
        }
    }
}
class program6
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