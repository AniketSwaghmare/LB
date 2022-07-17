//write a program which accept matrix from user and return addition of diagonal elements
import java.lang.*;
import java.util.*;


class Adiagonal
{
    public int AddDiagonal(int Arr[][],int iRow,int iCol)
    {
        int iSum = 0;
        for(iRow = 0; iRow < Arr.length; iRow++)
        {
            for(iCol = 0; iCol < Arr[iRow].length; iCol++)
            {
                if(iRow == iCol)
                {
                    iSum = iSum + Arr[iRow][iCol];
                }
            }
        }
       return iSum;
    
    }

}
class program1
{
    public static void main(String arg[])
    {
        int irow = 0, iCol = 0,i = 0, j = 0;
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
      int iRet =  dobj.AddDiagonal(Arr,irow, iCol);

      System.out.println("Addition is : "+iRet);
    }
}