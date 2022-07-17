// This Application work on accept folder name and all files data copy to newly created file 
import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program266
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

        File fobj = new File("Combine.txt");
        boolean bobj = fobj.createNewFile();
        FileOutputStream writerobj = new FileOutputStream(fobj);
        
        FileInputStream readerobj = null;
        int ret = 0;
        byte buffer[] = new byte[100];

      for(int i = 0; i<allfiles.length;i++)
      {
        name = allfiles[i].getName();
        if(name.endsWith(".txt"))
        {
          readerobj = new FileInputStream(allfiles[i]);
          
          while((ret = readerobj.read(buffer)) != -1)
          {
            writerobj.write(buffer,0,ret);
          }
        }
        
      }


    }
    catch(Exception obj)
    {
       
    }
    }
}