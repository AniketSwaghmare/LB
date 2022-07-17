//write a program which accept matrix from user and display transpoe of the matrix
// the transpose of a given matrix is formed by interchanging the rows and columns of a matrix
import java.lang.*;
import java.util.*;


class ColumnsAdd
{
  public void Transpose(int Arr[][],int iRow,int iCol)
   {
       for(iRow = 0; iRow<Arr.length; iRow++)
       {
        for(iCol = 0; iCol<Arr[iRow].length; iCol++)
        {
            Arr[iRow][iCol] = Arr[iCol][iRow];
        }
       }

       System.out.println("Transpose of the Matrix : ");
       for(iRow = 0; iRow<Arr.length;iRow++)
       {
        for(iCol = 0; iCol <Arr[iRow].length; iCol++)
        {
            System.out.print(Arr[iRow][iCol]+"\t");

        }
        System.out.println();
       }
   }
   
}
class program6
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
            for(j = 0; j< Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
           
        }

        ColumnsAdd cobj = new ColumnsAdd();
      cobj.Transpose(Arr,irow,iCol);
       
    }

}