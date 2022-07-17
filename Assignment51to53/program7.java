//write java program which accept number of rows and number of columns from user and display below pattern.

import java.lang.*;
import java.util.*;

class pattern
{
    public void pattern(int iRow,int iCol)
    {   
        int i = 0,j = 0;
        char ch= '\0',ch2 = '\0';
      

        for(i = 1; i<= iRow; i++)
        {
            
            for(j = 1,ch = 'A',ch2 = 'a'; j <= iCol; j++,ch++,ch2++)
            {
              if(i %2 == 0)
              {
                System.out.print(ch2+"\t");
              }
              else
              {
                System.out.print(ch+"\t");
              }     
                
            }
            System.out.println();
           
        }
        
    }
}
class program7
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