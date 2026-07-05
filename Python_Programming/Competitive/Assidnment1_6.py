def Display(No):
    if No > 0 :
        print("Positive")
    elif No < 0:
        print("Negative")
    else :
        print("Zero")

def main():
    Value = int(input("Enter Number : "))

    Display(Value)

if __name__ == "__main__" :
    main()