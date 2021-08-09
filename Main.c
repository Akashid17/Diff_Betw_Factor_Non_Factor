
#include<stdio.h>

int DiffFactors(int iNo)
{
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i < iNo; i++)
    {
        if(iNo%i == 0)
        {
            iDiff = iDiff + i;
        }
        else
        {
            iDiff = iDiff - i;
        }
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DiffFactors(iValue);

    printf("%d\n",iRet);

    return 0;
}