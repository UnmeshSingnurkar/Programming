Square = lambda No : No * No

def main():
    Data = [10,20,30,40]

    Mdata = list(map(Square,Data))

    print(Mdata)

if __name__ == "__main__" :
    main()