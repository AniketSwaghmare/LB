//write java program to accept file name from user and Open that file in write mode and write some data at the end of file.

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File name");
        String Fname = sobj.nextLine();

        try
        {
         File file = new File(Fname);
         Scanner inputFile = new Scanner(file);
        
         System.out.println("Succesfully Opened File");

         System.out.println("Enter the Data");
         String Data = sobj.nextLine();

         BufferedWriter out = new BufferedWriter(new FileWriter(file,true));
            out.write(Data);

            System.out.println("Succesfully Writed A Data");
            out.close();
         }
        catch(Exception e)
        {

        }
    }
   
}