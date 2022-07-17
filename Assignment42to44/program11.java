//write java program to accept Directory name from user and write names of all files from that directory into one newly created file named as "Marvellous.txt"
import java.lang.*;
import java.io.File.*;
import java.util.*;
import java.io.*;



class program11
{
    public static void main(String arg[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Directory Name");
        String dirName = sobj.next();
        File dir = new File(dirName);
        File flist[] = dir.listFiles();

        if((!(dir.isDirectory())) || (!(dir.exists())))
        {
            System.out.println("It is Not a Directory oR Not Exist...");
            System.exit(0);
        }
      System.out.println("Enter The File Name..");
      String fileName = sobj.next();

      FileOutputStream fout = new FileOutputStream(fileName,true);
      
      int i = 0;
      while(i != flist.length)
      {
        byte b[] = dir.list()[i].getBytes();
        fout.write(b);
        i++;
      }
      sobj.close();
      fout.close();
    }
   
}