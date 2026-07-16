import threading

def SumEven(Data):
    Sum = 0

    for i in Data:
        if i % 2 == 0:
            Sum = Sum + i
    
    print("Sum of Even numbers is :",Sum)

def SumOdd(Data):
    Sum = 0
    
    for i in Data:
        if i % 2 != 0:
            Sum = Sum + i
   
    print("Sum of Odd numbers is :",Sum)

def main():
    Data = list()

    Value = int(input("Enter number of elements: "))

    for i in range(Value):
        No = int(input())
        Data.append(No)

    EvenList = threading.Thread(target=SumEven, args=(Data,))
    OddList = threading.Thread(target=SumOdd, args=(Data,))

    EvenList.start()
    OddList.start()

    EvenList.join()
    OddList.join() 

    print("Exit From Main")

if __name__ == "__main__" :
    main()