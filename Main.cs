
using System;

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());
		
		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.DiffFactors(iValue);

		Console.WriteLine(iRet);
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

		do
		{
			if(iNo % i == 0)
			{
				iDiff = iDiff + i;
			}
			else
			{
				iDiff = iDiff - i;
			}

			i++;
		}while(i < iNo);
		
		return iDiff;
	}
}