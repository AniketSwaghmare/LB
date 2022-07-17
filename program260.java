// This Application work on open file and read file (this concept display the data in binary)
import java.lang.*;
import java.util.*;
import java.io.*;

class program260
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
            BufferedReader bobj = new BufferedReader(new FileReader(file));
            String str;

            while((str = bobj.readLine()) != null)
            {
                System.out.println(str);
            }
        }
        else
        {
            System.out.println("There is No Such File");
        }
    }
    catch(Exception obj)
    {
        System.out.println(obj);
    }
    }
}