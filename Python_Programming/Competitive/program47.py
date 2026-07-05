from functools import reduce

Multiplication = lambda No1, No2 : No1 * No2

def main():
    Data = [11,20,32,40]

    Mdata = reduce(Multiplication,Data)

    print(Mdata)

if __name__ == "__main__" :
    main()