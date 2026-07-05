CountEven = lambda No : No % 2 == 0

def main():
    Data = [11,20,32,40,30,60]

    Mdata = len(list(filter(CountEven,Data)))

    print(Mdata)

if __name__ == "__main__" :
    main()