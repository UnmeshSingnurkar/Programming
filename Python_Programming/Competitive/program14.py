def Prime(No):
    Flag = True
    for i in range(2,int(No/2)+1):
        if(No % i == 0):
            Flag = False
            break
    
    return Flag 

def main():
    Value = int(input("Enter number : "))

    Ret = Prime(Value)

    if Ret == True :
        print("Prime Number")
    else:
        print("Not a prime number")
    
if __name__ == "__main__":
    main()