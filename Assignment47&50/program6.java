//write java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements

import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int i = 0;
        int iSum1 = 0, iSum2 = 0;
        try
    {
        for(i = 0; i<= Arr.length; i++)
        {
            if((Arr[i] % 2)==0)
            {
                iSum1 += Arr[i];
            }
            else
            {
                iSum2 += Arr[i];
            }
        }
    }
    catch(Exception e)
    {}
        return iSum1 - iSum2;
    }
}

class program6
{
    public static void main(String arg[])
    {
        
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number that you wnat");
            iValue = sobj.nextInt();
            int Arr[] = new int[iValue];
        System.out.println("Enter the Elements");
        for(int i = 0; i< Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        ArrayDemo obj = new ArrayDemo();
       int iRet =  obj.Difference(Arr);

       System.out.println("Difference Are : "+iRet);
    }
}