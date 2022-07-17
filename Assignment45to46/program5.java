//write a program which accept matrix from user and swap the contents of consecutive rows
import java.lang.*;
import java.util.*;


class ColumnsAdd
{
  public void SwapRows(int Arr[][],int iRow,int iCol)
   {
    
    int iSum = 0,temp = 0;

    for(int i = 0; i<Arr.length; i++)
    {
        for(int j = 0; j<Arr[i].length; j++)
        {
            if(i == 0)
            {
                temp = Arr[0][j];
                Arr[0][j] = Arr[1][j];
                Arr[1][j] = temp;
            }
            else if(i == 2)
            {
                temp = Arr[2][j];
                Arr[2][j] = Arr[3][j];
                Arr[3][j] = temp;
            }
        }
    }
    
    for(int i = 0; i<Arr.length; i++)
    {
        for(int j = 0; j<Arr[i].length; j++)
        {
            System.out.print(Arr[i][j]+" ");

        }
        System.out.println();
    }
        
   }
   
}
class program5
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
      cobj.SwapRows(Arr,irow,iCol);
       
    }

}