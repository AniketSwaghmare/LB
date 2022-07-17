//write a java program which Accept string from user and check whether it contains vowels in it or not

import java.lang.*;
import java.util.*;

class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet;
        String sValue = " ";

        System.out.println("Enter the String");
        sValue = sobj.nextLine();

      
        char Arr[] = sValue.toCharArray();

        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == 'a' || Arr[i] == 'e' || Arr[i] == i || Arr[i] == 'o' || Arr[i] == 'u' || Arr[i] == 'A' || Arr[i] == 'E' || Arr[i] == 'I' || Arr[i] == 'O' || Arr[i] == 'U')
            {
                System.out.println("This String is vowels");
            }
            else
            {
                System.out.println("This String is Not vowels");
            }
        }
       
       
    }
}