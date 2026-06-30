def CheckPerfect(no):
    flag  = False
    Sum = 0

    for i in range(1, int(no/2)+1):
        if no%i == 0:
            Sum = Sum + i
    
    if Sum == no:
        flag = True

    return flag

def main():
    Value = int(input("Enter Number : "))

    Ret = CheckPerfect(Value)

    if Ret == True :
        print("Perfect Number")
    else: 
        print("Not a perfect number")
    
if __name__ == "__main__":
    main()