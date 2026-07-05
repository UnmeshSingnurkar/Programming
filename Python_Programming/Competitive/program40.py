Even = lambda No : No % 2 == 0

def main():
    Data = [11,20,32,40]

    Mdata = list(filter(Even,Data))

    print(Mdata)

if __name__ == "__main__" :
    main()