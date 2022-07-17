//this application 
import java.lang.*;
import java.util.*;
import java.io.*;


class program271
{
    public static void main(String arg[])
    {
     
      try
      {
      Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Packed File Name");
        String PackFileName = sobj.nextLine();

        File fobj = new File(PackFileName);

        FileInputStream fiobj = new FileInputStream(fobj);

        byte Headerarray[] = new byte[100];

        fiobj.read(Headerarray,0,100);

        String HeaderString = new String(Headerarray);

        System.out.println(HeaderString);

        String tokens[] = HeaderString.split(" "); // tokens hey method return value la thodt

        System.out.println("File Name : " +tokens[0]);
        System.out.println("File Size : " +tokens[1]);
     }
     catch(Exception e)
     {
        System.out.println(e);
     }
    } 
}