import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow,iCol;

    public Pattern(int a, int b)
    {
        iRow = a;
        iCol = b;
    }

        void DisplayPattern()
    {
        int i = 0, j = 0;
        for(i = 1; i <=iRow; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class program135
{
    public static void main(String b[])
    {
        Pattern obj = new Pattern(4,4);

        obj.DisplayPattern();
    
    }
}