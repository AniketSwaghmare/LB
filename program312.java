
//Addition Largest Number Digit at the end of single Digit is not remaing
import java.lang.*;
import java.util.*;

class program312 {

   public static void main(String arg[]) {
      int idigit = 0, iSum = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Numnber");
      int iNo = sobj.nextInt();

      while (true) {
         while (iNo != 0) {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
         }
         iNo = iSum;
         iSum = 0;

         if (iNo < 10) // iNo is digit is less than 10 is remaning than loop will be break
         {
            break;
         }

      }
      System.out.println(iNo);
   }
}