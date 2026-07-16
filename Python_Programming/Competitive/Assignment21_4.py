import threading

sum = 0
mult = 1

def Sum(Data):
    global sum

    for i in Data:
        sum = sum + i

def Product(Data):
    global mult

    for i in Data:
        mult = mult * i


def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    Thread1 = threading.Thread(target=Sum, args=(Data,))
    Thread2 = threading.Thread(target=Product, args=(Data,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Summation is :",sum)
    print("Multiplication is :",mult)

if __name__ == "__main__" :
    main()