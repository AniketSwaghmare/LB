// This Application work on accept folder name and display that folder file name
import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program264
{
    public static void main(String arg[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter Existing File Name");
        String foldername= sobj.nextLine();
        
        File dobj = new File(foldername);

        File allfiles[] = dobj.listFiles();

      for(int i = 0; i<allfiles.length;i++)
      {
        System.out.println(allfiles[i].getName());
      }
    }
    catch(Exception obj)
    {
       
    }
    }
}