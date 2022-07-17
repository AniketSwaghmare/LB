//Accept String from user and Check wether the string is pallindrome or not without considering its case.

import java.lang.*;
import java.util.*;

class StringDemo
{
  public static boolean StrPallindrome(String str)
  {
    str = str.toLowerCase();

    boolean ans = false;
    String rev = " ";
    int i = 0, j = str.length() -1;

    while(i < j)
    {
        if(str.charAt(i) != str.charAt(j))
        {
          return false;
        }
       
        i++;
        j--;
    }
    
    return true;
  }
}

class program3
{
    public static void main(String arg[])
    {
        String str = " ";
        boolean bRet;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First String");
        String svalue1 = sobj.nextLine();

        StringDemo obj = new StringDemo();
        bRet = obj.StrPallindrome(svalue1);

       if(bRet == true)
       {
        System.out.println("This String is Palindrom..");
       }
       else
       {
        System.out.println("This String is  Not a Palindrom..");
       }
      
        
    }
}