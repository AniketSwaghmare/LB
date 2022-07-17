//write java program to accept Directory name from user and create that Directory
import java.lang.*;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program8
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Directory Name");
        String Fname = sobj.nextLine();
       File file = new File(Fname);
       boolean value = file.mkdir();

       if(value)
       {
        System.out.println("Directory Created Succesfully");
       }
       else
       {
            System.out.println("Sorry Directory Not Created");
       }
        
       
    }
   
}