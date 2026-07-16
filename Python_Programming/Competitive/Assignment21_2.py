import threading

def Maximum(Data):
    Ans = max(Data)
    print("Maximum :",Ans)

def Minimun(Data):
    Ans = min(Data)
    print("Minimum :",Ans)


def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    Thread1 = threading.Thread(target=Maximum, args=(Data,))
    Thread2 = threading.Thread(target=Minimun, args=(Data,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit From Main")

if __name__ == "__main__" :
    main()