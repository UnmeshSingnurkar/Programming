def Factors(no):
    Fact = list()

    for i in range (1,int(no/2)+1):
        if(no % i == 0):
            Fact.append(i)

    return Fact

def main():
    Value = int(input("Enter Number : "))

    Ret = Factors(Value)

    print("Factors are :",Ret)
    
if __name__ == "__main__":
    main()