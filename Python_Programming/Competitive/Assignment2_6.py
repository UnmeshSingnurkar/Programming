def Display(iNo):
    for i in range(iNo):
        print("*\t"*iNo)
        iNo = iNo -1 

def main():
    Value = int(input("Enter Number : "))

    Display(Value)

if __name__ == "__main__" :
    main()