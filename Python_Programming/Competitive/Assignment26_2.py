class Circle:

    PI = 3.14

    def __init__(self):
        self.radius = 0
        self.Area = 0
        self.Circumference = 0

    def Accept(self):
        self.radius = int(input("Enter Radius : "))

    def CalculateArea(self):
        self.Area = Circle.PI * self.radius * self.radius
    
    def CalculateCircumference(self):
        self.Circumference = 2 * Circle.PI * self.radius

    def Display(self):
        print("Radius : ",self.radius)
        print("Area :",self.Area)
        print("Circumference is :",self.Circumference)

def main():
    obj1 = Circle()
    obj2 = Circle()

    obj1.Accept()
    obj1.CalculateArea()
    obj1.CalculateCircumference()
    obj1.Display()

    obj2.Accept()
    obj2.CalculateArea()
    obj2.CalculateCircumference()
    obj2.Display()
if __name__ == "__main__" :
    main()