def DisplayGrades(no):
    
    if (no <= 100) and (no >= 75) :
        print("Distinction")
    elif (no < 75) and (no >= 60) :
        print("First Class")
    elif (no < 60) and (no >= 50) :
        print("Second Class")
    elif (no < 50) and (no >= 0) :
        print("Fail")
    else :
        print("Invalid Input")

def main():
    Value = int(input("Enter Grade : "))

    DisplayGrades(Value)
    
if __name__ == "__main__":
    main()