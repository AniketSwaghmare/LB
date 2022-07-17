//write a program which accept matrix and check whether the matrix is Sparse matrix or not
// Spare matrix is a matrix with the majority of its elements equal to zero
/*
  1 0 3 0 
  0 6 0 0
  0 0 1 0
  9 0 0 9
 */
import java.lang.*;
import java.util.*;

class SpareX {
   public static int ChkSparse(int Arr[][],int irow, int iCol)
   {
        int iCnt = 0;

        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                if(Arr[i][j] == 0)
                {
                  iCnt++;
                }
            }
        }
       return iCnt;
   }
}

class program10 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows");
        int irow = sobj.nextInt();

        System.out.println("Enter number of Columns");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[irow][iCol];

        System.out.println("Enter the Values");

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
            System.out.println();
        }

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr.length; j++) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }

        SpareX obj = new SpareX();

       int iRet =  obj.ChkSparse(Arr, irow, iCol);


        if(iRet >(irow*iCol/2))
        {
            System.out.println("Matrix is Sparse Matrix");
        }
        else
        {
            System.out.println("Matrix is Not Sparse Matrix");
        }
    }

}