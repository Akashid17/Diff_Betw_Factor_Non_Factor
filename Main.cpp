
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int DiffFactors(int);
};

int ArithmeticX::DiffFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDiff = 0;

    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
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

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    iRet = aobj.DiffFactors(iValue);

    cout<<iRet<<endl;

    return 0;
}