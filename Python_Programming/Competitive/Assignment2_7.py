def Display(iNo):
    for i in range(iNo):
        for j in range(1,iNo+1):
            print(j,end="\t")
        print()

def main():
    Value = int(input("Enter Number : "))

    Display(Value)

if __name__ == "__main__" :
    main()