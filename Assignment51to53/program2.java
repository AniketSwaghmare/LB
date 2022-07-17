//write a program which 2 strings from user and check whether first N contents of two strings are equals or not.

import java.lang.*;
import java.util.*;

class StringDemo
{
    
    public static boolean StrCmpX(String src,String dest)
    {
        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        for(int i = 0; i<= Arr.length;i++)
        {
            for(int j = 0; j<= Brr.length; j++)
            {
                if(Arr[i] == (Brr[j]))
                {
                  return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }

}

class program2
{
    public static void main(String arg[])
    {
        String str = " ";
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String");
        String svalue1 = sobj.nextLine();

        System.out.println("Enter the Second String");
        String svalue2 = sobj.nextLine();

        StringDemo obj = new StringDemo();
       boolean bRet = obj.StrCmpX(svalue1,svalue2);
        if(bRet == true)
        {
            System.out.println("There are Same String..");
        }
        else
        {
            System.out.println("THare are Not Same String..");
        }
       
    }
}