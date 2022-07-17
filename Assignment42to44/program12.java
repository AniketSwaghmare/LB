//write java program to accept directory name from user and write data of all files into one newly created file named as "Marvellous.txt.."

import java.lang.*;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program12
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Directory Name");
        String dirName = sobj.next();
        File dirf = new File(dirName);
        File flist[] = dirf.listFiles();
       
        

        if((!(dirf.isDirectory())) || (!(dirf.exists())))
        {
            System.out.println("It is Not a Directory oR Not Exist...");
            System.exit(0);
        }
       
         System.out.println("Enter The File Name..");
         String fileName = sobj.next();
         File file = new File(fileName);

        FileOutputStream fout = new FileOutputStream(file,true);

        String newline = "\n";
        byte newLine[] = newline.getBytes();
        int i = 0,ret = 0;

        while(i != flist.length)
        {
            if(flist[i].isFile())
            {
                String f = flist[i].toString();
                try(FileInputStream fin = new FileInputStream(f))
                {
                    while((ret = fin.read()) != -1)
                    {
                        fout.write(ret);    // fileData
                    }
                }
                fout.write(newLine);
                
            }
            i++;
        }
        System.out.println("Succesfully Copy Data...");
        sobj.close();
        fout.close();
    }
   
}