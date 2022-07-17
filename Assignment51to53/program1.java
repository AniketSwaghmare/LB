//write a java program which accepts 2 strings from user and concat N characters of second string after frist string.value of N should be accepted from user.
import java.lang.*;
import java.util.*;

class StringDemo
{
    String StrNCatX(String src,String dest)
    {
        int i = 0,j = 0;
        String str = " ";
        char Arr[] = src.toCharArray();
       

        for(i = 0; i<Arr.length;i++)
        {
          str = src.concat(" "+dest);
        }

       return str;
    }

}

class program1
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
        str = obj.StrNCatX(svalue1,svalue2);
    
        System.out.println(str);
    }
}