
def DiffFactors(iNo):

    if iNo < 0:
        iNo = -iNo

    iDiff = 0

    for x in range(1,iNo):
        if iNo%x == 0:
            iDiff += x
        else:
            iDiff -= x

    return iDiff

def main():

    iValue = int(input("Enter Number\n"))

    print(DiffFactors(iValue))
    
if __name__ == "__main__":

    main()