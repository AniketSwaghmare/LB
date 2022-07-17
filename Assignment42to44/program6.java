//write java program to accept two file names from user and open first file and create new file(second name) and copy the data from first file int newly creted file

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program6
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the First File Name");
        String Fname = sobj.nextLine();

        System.out.println("Enter the Second File Name");
        String Fname1 = sobj.nextLine();
       

        try
        {
         File file = new File(Fname);
         File file1 = new File(Fname1);
        FileInputStream fis = null;
        FileOutputStream fos = null;
        fis = new FileInputStream(file);
        fos = new FileOutputStream(file1);

         Scanner inputFile = new Scanner(file);
        
         System.out.println("Succesfully Opened First File");
         boolean value = file1.createNewFile();
         if(value == true)
         {
            System.out.println("New File Succesfully Creaed");
         }
       
         int i;
         while((i = fis.read()) != -1)
         {
            fos.write(i);
             
         }

           
         }
         catch(Exception e)
         {

         }
    }
   
}