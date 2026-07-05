from functools import reduce

Addition = lambda No1, No2 : No1+ No2

def main():
    Data = [11,20,32,40]

    Mdata = reduce(Addition,Data)

    print(Mdata)

if __name__ == "__main__" :
    main()