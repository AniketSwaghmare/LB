//Write a program which accept matrix and reverse the contents of each row

/*
    input:
    3 2 5 9
    4 3 2 2
    8 4 1 9
    3 9 7 5

    outPut:
    9 5 2 3
    2 2 3 4
    9 1 4 8
    5 7 9 3
 */

import java.lang.*;
import java.util.*;

class RowReverse {
    public static void ReversRow(int Arr[][], int irow, int iCol) {
        for (int i = 0; i < Arr.length; i++) {
            int x = Arr[i].length - 1;

            for (int j = 0; j < (Arr[i].length) / 2; j++) {
                if (j < x) {
                    int Temp = Arr[i][x];
                    Arr[i][x] = Arr[i][j];
                    Arr[i][j] = Temp;

                    x--;
                }
            }
        }
        System.out.println("After Reverser row");

        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr.length; j++) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}

class program7 {
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

        RowReverse obj = new RowReverse();

        obj.ReversRow(Arr, irow, iCol);
    }

}