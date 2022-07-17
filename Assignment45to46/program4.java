//write a program which accept matrix from user and display addition of elements from each columns
import java.lang.*;
import java.util.*;


class ColumnsAdd
{
  public void AddColumn(int Arr[][],int iRow,int iCol)
   {
        int iSum = 0;

        for(iRow = 0; iRow < Arr.length; iRow++)
        {
            for(iCol = 0; iCol < Arr[iRow].length;iCol++)
            {
                iSum = iSum + Arr[iRow][iCol];
            }
            System.out.println("Columns Addition : "+iSum);
            iSum = 0;
        }
   }
   
}
class program4
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
      cobj.AddColumn(Arr,irow,iCol);
       
    }

}