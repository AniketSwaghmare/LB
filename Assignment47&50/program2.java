//write a java program which Accept string from user and count number of small characters.

import java.lang.*;
import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();

        int iCnt = 0;

        for(int i = 0; i<Arr.length;i++)
        {
          if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
          {
                iCnt++;
          }

        }
        return iCnt;
    }   
}
class program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String sValue = " ";

        System.out.println("Enter the String");
        sValue = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountSmall(sValue);


        System.out.println("Small Characters Are : "+iRet);

    }
}