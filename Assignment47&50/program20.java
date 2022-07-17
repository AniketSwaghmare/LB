//write java program which accept N numbers from user and return product of all odd elements
import java.lang.*;
import java.util.*;



class NumberX
{
    public void product(int Arr[])
    {
        int i = 0;
      
        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] % 2 != 0)
            {
                System.out.println("Odd Number is : "+Arr[i]);
            }
        }
    }
}


class program20
{
    public static void main(String arg[])
    {
        
   
        
        int iValue = 0,i = 0;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        int Arr[] = new int[iValue];
        System.out.println("Enter the Elements");
        for(i = 0; i< Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        NumberX obj = new NumberX();
        obj.product(Arr);
       
    }
}