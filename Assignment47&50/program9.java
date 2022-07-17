//write java program which accept N numbers from user and display all such elements which are multiples of 11

import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        int i = 0;
       
        try
    {
        for(i = 0; i<= Arr.length; i++)
        {
            if(Arr[i] % 11 == 0)
            {
                System.out.println( "Multiples of 11 Number Are : "+Arr[i]);
            }
           
        }
    }
    catch(Exception e)
    {}
        
    }
}

class program9
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
        obj.Display(Arr);

      
    }
}