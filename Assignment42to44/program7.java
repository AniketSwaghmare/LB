//write java program to accept file name from user and check whether that file is regular file or not
import java.lang.*;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the First File Name");
        String Fname = sobj.nextLine();
        File file = new File(Fname);
        
        if(file.isFile())
        {
         System.out.println("This File is Regualr File");
        }
        else
        {
         System.out.println("This File is Not Regular");
        }
    }
   
}