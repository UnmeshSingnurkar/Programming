def Display(iNo):
    for i in range(iNo+1):
        for j in range(1,i+1):
            print(j,end="\t")
        print()

def main():
    Value = int(input("Enter Number : "))

    Display(Value)

if __name__ == "__main__" :
    main()