// This Application work on open file and read file(this concept Display data on Excatly)
import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
class program261
{
    public static void main(String arg[])
    {
        try
        {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please Enter File Name");
        String Filename = sobj.nextLine();
        File file = new File(Filename);

        if(file.exists())
        {
            FileInputStream fobj = new FileInputStream(file);
            byte buffer[] = new byte[100];
            int ret = 0;

            while((ret = fobj.read(buffer)) > 0)
            {
                String str1 = new String(buffer,StandardCharsets.UTF_8);  //string with "UTF_8"encoding
                System.out.println(str1);
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