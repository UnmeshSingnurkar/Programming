import threading

def CountLower(Data):
    Count = 0

    for i in Data:
        if 'a' <= i <= 'z':
            Count = Count + 1
    
    print("Numbere of lower cases are :",Count)

def CountCapital(Data):
    Count = 0

    for i in Data:
        if 'A' <= i <= 'Z':
            Count = Count + 1
    
    print("Numbere of capital cases are :",Count)

def CountNumber(Data):
    Count = 0

    for i in Data:
        if '0' <= i <= '9':
            Count = Count + 1
    
    print("Numbere of digits are :",Count)

def main():
    Value = input("Enter String : ")

    Value = list(Value)

    Small = threading.Thread(target=CountLower, args=(Value,))
    Capital = threading.Thread(target=CountCapital, args=(Value,))
    Digits = threading.Thread(target=CountNumber, args=(Value,))

    Small.start()
    Capital.start()
    Digits.start()

    Small.join()
    Capital.join() 
    Digits.join()

    print("Exit From Main")

if __name__ == "__main__" :
    main()