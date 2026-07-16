import threading

def ChkPrime(Data):
    Ans = list()
    
    for i in Data:
        flag = False

        for no in range(2,int(i/2)+1):
            if i % no == 0:
                flag = True
                break
            
        if flag == False:
            Ans.append(i)
    print(Ans)

def ChkNonPrime(Data):
    Ans = list()
    
    for i in Data:
        flag = False

        for no in range(2,int(i/2)+1):
            if i % no == 0:
                flag = True
                break
            
        if flag == True:
            Ans.append(i)
    print(Ans)


def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    Thread1 = threading.Thread(target=ChkPrime, args=(Data,))
    Thread2 = threading.Thread(target=ChkNonPrime, args=(Data,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit From Main")

if __name__ == "__main__" :
    main()