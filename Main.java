
import java.lang.*;
import java.io.*;

class Main
{
    public static void main(String args[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iValue = 0;

        try
        {
            System.out.println("Enter Number");
            iValue = Integer.parseInt(bobj.readLine());
        }
        catch(Exception eobj)
        {}

        ArithmeticX aobj = new ArithmeticX();
        int iRet = aobj.DiffFactors(iValue);

        System.out.println(iRet);
    }
}

class ArithmeticX
{
    public int DiffFactors(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 1;
        int iDiff = 0;

        while(i < iNo)
        {
            if(iNo%i == 0)
            {
                iDiff = iDiff + i;
            }
            else
            {
                iDiff = iDiff - i;
            }

            i++;
        }
        return iDiff;
    }
}