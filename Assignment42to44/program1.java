//write java program to accept file name from user and create new file of that name if it is not existing.

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;
import java.io.*;
class program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File name");
        String Fname = sobj.nextLine();
         File file = new File(Fname);

         try
         {

         
      boolean value = file.createNewFile();

      if(value == true)
      {
        System.out.println("Succesfully Created...");
      }
      else
      {
        System.out.println("Already Created File...");
      }
    }
    catch(Exception ex1)
    {

    }
   
      
    }
}