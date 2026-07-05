Divisible = lambda No : No % 15 == 0

def main():
    Data = [11,20,32,40,30,60]

    Mdata = list(filter(Divisible,Data))

    print(Mdata)

if __name__ == "__main__" :
    main()