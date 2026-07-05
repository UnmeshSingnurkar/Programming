String = lambda Val : len(Val) > 5

def main():
    Data = ["Marvellous","Jay","Ganeshh"]

    Mdata = list(filter(String,Data))

    print(Mdata)

if __name__ == "__main__" :
    main()