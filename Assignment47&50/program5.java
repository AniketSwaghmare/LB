//write a java program which Accept string from user and Display it in reverse order

import java.lang.*;
import java.util.*;

class StringDemo
{
    public void Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0,iEnd = Arr.length -1;   
        char temp;

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
        System.out.println(Arr);
    }
}
class program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet;
        String sValue = " ";

        System.out.println("Enter the String");
        sValue = sobj.nextLine();

        StringDemo obj = new StringDemo();

        obj.Reverse(sValue);
       
    }
}