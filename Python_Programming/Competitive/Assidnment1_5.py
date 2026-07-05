def RevDisplay(No):
    for i in range(No,0,-1):
        print(i)

def main():
    Value = int(input("Enter Number : "))

    RevDisplay(Value)

if __name__ == "__main__" :
    main()