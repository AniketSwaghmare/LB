//write a java program which Accept string from user and count number of capital characters.

import java.lang.*;
import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0;

        for(int i = 0; i<Arr.length;i++)
        {
          if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
          {
                iCnt++;
          }

        }
        return iCnt;
    }   
}
class program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String sValue = " ";

        System.out.println("Enter the String");
        sValue = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountCapital(sValue);


        System.out.println("Capital Characters Are : "+iRet);

    }
}