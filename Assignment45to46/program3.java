//write a program which accept matrix from user and return largest number from both the diagonals

import java.lang.*;
import java.util.*;


class Adiagonal
{
    int MaxDiagonal(int Arr[][],int iRow,int iCol)
    {
        int iMax = 0,iRet = 0;
        for(iRow = 0; iRow<Arr.length; iRow++)
        {
            for(iCol = 0; iCol<Arr[iRow].length; iCol++)
            {
                if(iRow == iCol)
                {
                    if(Arr[iRow][iCol] > iMax)
                    {
                        iMax = Arr[iRow][iCol];
                    }
                    
                }
            }
           
        }   
           return iMax;
    }
   
}
class program3
{
    public static void main(String arg[])
    {
        int i = 0, j = 0,irow = 0, iCol = 0,Fre = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Row Number");
        irow = sobj.nextInt();

        System.out.println("Enter Columns Number");
        iCol = sobj.nextInt();

       int Arr[][] = new int[irow][iCol];

        System.out.println("Enter the Elements");

        for(i = 0; i<Arr.length; i++)
        {
            for(j = 0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Adiagonal dobj = new Adiagonal();

        int iret = dobj.MaxDiagonal(Arr,irow,iCol);
        System.out.println("Largest Number are : "+iret);

    }

}