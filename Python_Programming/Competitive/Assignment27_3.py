class Numbers:

    def __init__(self,a):
        self.Value = a

    def ChkPrime(self):
        flag = True

        for i in range(2,(int(self.Value/2))+1):
            if self.Value % i == 0:
                flag = False
                break
        
        if flag == True:
            print("Prime Number")
        else:
            print("Not prime number")


    def ChkPerfect(self):
        sum = 0

        for i in range(1,(int(self.Value/2))+1):
            if self.Value % i == 0:
                sum = sum + i

        if sum == self.Value:
            print("Perfect Number")
        else:
            print("Not Perfect Number")

    def Factors(self):
        for i in range(1,(int(self.Value/2))+1):
            if self.Value % i == 0:
                print(i)

    def SumFactors(self):
        sum = 0

        for i in range(1,(int(self.Value/2))+1):
            if self.Value % i == 0:
                sum = sum + i
            
        print("Sum of Factors is :",sum)

def main():
    Value = int(input("Enter Number : "))

    obj1 = Numbers(Value)
    obj1.ChkPrime()
    obj1.ChkPerfect()
    obj1.Factors()
    obj1.SumFactors()

if __name__ == "__main__" :
    main()