import threading

def SumEvenFactor(No):
    Sum = 0
    for i in range(2,int(No/2)+1):
        if No % i == 0:
            if i % 2 == 0:
                Sum = Sum + i
    
    print("Sum of Even factors is :",Sum)

def SumOddFactor(No):
    Sum = 0
    for i in range(1,int(No/2)+1):
        if No % i == 0:
            if i % 2 != 0:
                Sum = Sum + i
   
    print("Sum of Odd factors is :",Sum)

def main():
    Value = int(input("Enter number : "))

    EvenFactor = threading.Thread(target=SumEvenFactor, args=(Value,))
    OddFactor = threading.Thread(target=SumOddFactor, args=(Value,))

    EvenFactor.start()
    OddFactor.start()

    EvenFactor.join()
    OddFactor.join() 

    print("Exit From Main")

if __name__ == "__main__" :
    main()