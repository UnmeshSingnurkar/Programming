import multiprocessing
import os
import time

def Calculate(No):
    print("Process is running with PID :",os.getpid())

    Count = 0

    for i in range(2,No+1):
        flag = True
        for j in range(2,(int(i/2)+1)):
            if i % j == 0:
                flag = False
                break
        
        if flag == True:
            Count = Count + 1

    return Count

def main():
    Data = list()

    Value = int(input("Enter number of elements : "))

    print("Enter Elements :")

    for i in range(Value):
        No = int(input())
        Data.append(No)

    start_time = time.perf_counter()

    pobj = multiprocessing.Pool()

    Result = pobj.map(Calculate,Data)

    pobj.close()
    pobj.join()

    end_time = time.perf_counter()

    for i in range(Value):
        print(Data[i],":",Result[i])

    print(f"Time required : {end_time - start_time:.4f} seconds")

if __name__ == "__main__" :
    main()