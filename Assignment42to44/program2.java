//write java program to accept file name from user and open that file

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;

import java.io.*;
class program2
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
         }
        catch(Exception e)
        {

        }
    }
   
}