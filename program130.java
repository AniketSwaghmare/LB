import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public int Factorial()
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact *= iCnt;
        }
        return iFact;
    }
}

class program130
{
    public static void main(String b[])
    {
            int iRet = 0;
        Number nobj = new Number();
        nobj.Accept();
        nobj.Display();
        
        iRet = nobj.Factorial();
        System.out.println("Factorial is : "+iRet);
    
    }
}