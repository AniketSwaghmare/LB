// This Application work on accept folder name and display that folder only .txt exstion file
import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program265
{
    public static void main(String arg[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter Directory/Folder Name..");
        String foldername= sobj.nextLine();
        
        File dobj = new File(foldername);

        File allfiles[] = dobj.listFiles();

        String name;

      for(int i = 0; i<allfiles.length;i++)
      {
        name = allfiles[i].getName();
        if(name.endsWith(".txt"))
        {
          System.out.println(name);
        }
        
      }


    }
    catch(Exception obj)
    {
       
    }
    }
}