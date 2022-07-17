//write java program to accept file name from user and open that file and display the contents on screen.

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File name");
        String Fname = sobj.nextLine();
        String Data = null;
        try
        {
         File file = new File(Fname);
         Scanner inputFile = new Scanner(file);
        
         System.out.println("Succesfully Opened File");
        
         FileReader fileReader = new FileReader(Fname);
         BufferedReader bufferedReader = new BufferedReader(fileReader);

         while((Data = bufferedReader.readLine()) != null)
         {
            System.out.print(Data);
         }
         System.out.print("\n");
          
        }
        catch(Exception e)
        {

        }
    }
   
}