// This Application work on open file and read file data amd write that file data into one new file.
// this application any file copy to that file(ex : mp3,pdf,txt,java,c,cpp)

import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
class program263
{
    public static void main(String arg[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter Existing File Name");
        String Filename = sobj.nextLine();
        File file = new File(Filename);
        
        System.out.println("Enter the New File Name to Create");
        String newfile = sobj.nextLine();
        
        File fobjnew = new File(newfile);
        boolean bobj1 = fobjnew.createNewFile();    // this concept create a new File.

        if(file.exists())
        {
            FileInputStream fobj = new FileInputStream(file);
            FileOutputStream foobj = new FileOutputStream(fobjnew);

            byte buffer[] = new byte[100];
            int ret = 0;
            int sum = 0;

            while((ret = fobj.read(buffer)) > 0)
            {
               foobj.write(buffer,0,ret);
            }
          
        }
        else
        {
            System.out.println("There is No Such File");
        }
    }
    catch(IOException obj)
    {
        System.out.println(obj);
    }
    }
}