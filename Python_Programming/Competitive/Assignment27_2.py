class BankAccount:
    ROI = 10.5

    def __init__(self,a,b):
        self.Name = a
        self.Amount = b

    def Display(self):
        print("Account Holder Name :",self.Name)
        print("Account Balance :",self.Amount)

    def Deposit(self,no):
        self.Amount = self.Amount + no

    def Withdraw(self,no):
        self.Amount = self.Amount - no

    def CalculateInterest(self):
        Interest = (self.Amount * BankAccount.ROI) / 100
        print(Interest)

def main():
    obj1 = BankAccount("Unmesh",1000)
    obj1.Display()
    obj1.Deposit(500)
    obj1.Display()
    obj1.Withdraw(500)
    obj1.Display()
    obj1.CalculateInterest()

if __name__ == "__main__" :
    main()