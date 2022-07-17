//write java program to accept directory name from user and display all names of files from that directory.

import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Directory Name");
        String Fname = sobj.nextLine();
        File Directory = new File(Fname);
        File FilesList[] = Directory.listFiles();
        
        System.out.println("Entered Directory File's Are : ");

        for(File file : FilesList)
        {
            System.out.println("File Name is : "+file.getName());
        }
    }
   
}