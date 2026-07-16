import threading

def Display(No):
    for i in range(1, No+1):
        print(i,end="\t")
    print()

def DisplayRev(No):
    for i in range(No, 0, -1):
        print(i,end="\t")
    print()


def main():
    Value = int(input("Enter Number : "))

    Thread1 = threading.Thread(target=Display, args=(Value,))
    Thread2 = threading.Thread(target=DisplayRev, args=(Value,))

    Thread1.start()
    print()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit From Main")

if __name__ == "__main__" :
    main()