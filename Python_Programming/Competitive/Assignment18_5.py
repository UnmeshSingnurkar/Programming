import MarvellousNum

def ListPrime(Data):
    Sum = 0

    for i in Data:
        Sum = Sum+i

    return Sum

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    Ans = MarvellousNum.ChkPrime(Data)
    
    Ret = ListPrime(Ans)

    print(f"Sum of prime numbers is : {Ret}")

if __name__ == "__main__" :
    main()