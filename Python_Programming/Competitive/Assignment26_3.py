class Arithmetic:
    def __init__(self):
        self.Value1 = 0
        self.Value2 = 0

    def Accept(self):
        self.Value1 = int(input("Enter 1st Number : "))
        self.Value2 = int(input("Enter 2nd Number : "))

    def Addition(self):
        print("Addition is :",self.Value1 + self.Value2)
    
    def Substraction(self):
        print("Substraction is :",self.Value1 - self.Value2)

    def Multiplication(self):
        print("Multiplication is :",self.Value1 * self.Value2)

    def Division(self):
        try :
            print("Division is :",self.Value1/self.Value2)
        except ZeroDivisionError as zobj:
            print("Cant Divide by 0")

def main():
    obj1 = Arithmetic()
    obj2 = Arithmetic()

    obj1.Accept()
    obj1.Addition()
    obj1.Substraction()
    obj1.Multiplication()
    obj1.Division()

    obj2.Accept()
    obj2.Addition()
    obj2.Substraction()
    obj2.Multiplication()
    obj2.Division()

if __name__ == "__main__" :
    main()