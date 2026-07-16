import threading

def DisplayEven(No):
    no = 0
    for i in range(No):
        no = no+2
        print(no,end="\t")
    print()

def DisplayOdd(No):
    no = 1
    for i in range(No):
        print(no,end="\t")
        no = no+2
    print()      

def main():
    Value = int(input("Enter number : "))

    Even = threading.Thread(target=DisplayEven, args=(Value,))
    Odd = threading.Thread(target=DisplayOdd, args=(Value,))

    Even.start()
    Odd.start()

    Even.join()
    Odd.join() 

if __name__ == "__main__" :
    main()