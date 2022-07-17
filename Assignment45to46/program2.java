//write a program which accept matrix from user and one number from user and return frequency of that number.

import java.lang.*;
import java.util.*;


class Adiagonal
{
    public int FrequencyN(int Arr[][],int irow,int iCol,int iNo)
    {
        int iRet = 0;
        for(irow = 0; irow < Arr.length; irow++)
        {
            for(iCol = 0; iCol < Arr[irow].length; iCol++)
            {
                if(Arr[irow][iCol] == iNo)
                {
                    iRet++;
                }
            }
        }
        return iRet;
    }

}
class program2
{
    public static void main(String arg[])
    {
        int i = 0, j = 0,irow = 0, iCol = 0,Fre = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Row Number");
        irow = sobj.nextInt();

        System.out.println("Enter Columns Number");
        iCol = sobj.nextInt();

        System.out.println("Enter One Number That you want check Frequency");
        Fre = sobj.nextInt();

        int Arr[][] = new int[irow][iCol];

        System.out.println("Enter the Elements");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Adiagonal obj = new Adiagonal();

       int iRet = obj.FrequencyN(Arr,irow,iCol,Fre);
        System.out.println("Frequency Number are : "+ iRet);
    }

}