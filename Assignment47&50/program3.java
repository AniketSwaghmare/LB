//write a java program which Accept string from user and return difference between frequency of small characters and frequency of capital characters

import java.lang.*;
import java.util.*;

class StringDemo
{
   
    public int CountDiff(String str)
    {
       
         char Arr[] = str.toCharArray();

       
           int iCnt1 = 0;
           int iCnt2 = 0;
        
     
           for(int i = 0; i< Arr.length; i++)
           {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCnt1++;
            }

            else if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt2++;
            }
           
     
           }
        
        
            return iCnt1 - iCnt2;

     }
    
    

}    

    

class program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        String sValue = " ";

        System.out.println("Enter the String");
        sValue = sobj.nextLine();

        StringDemo obj = new StringDemo();
        iRet = obj.CountDiff(sValue);

        
        System.out.println("Difference Are : "+iRet);

    }
}