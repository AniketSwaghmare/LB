//write java program to accept Directory name from user and create that Directory
import java.lang.*;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program9
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Directory Name");
        String Fname = sobj.nextLine();
       File file = new File(Fname);
       File filesList[] = file.listFiles();

       System.out.println("List of File's in Directory");
       for(File file1 : filesList)
       {
        System.out.println("File Name : "+file1.getName());
       }
        
       
    }
   
}