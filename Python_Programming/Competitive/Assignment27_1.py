class BookStore:
    NoOfBooks = 0

    def __init__(self,a,b):
        self.Name = a
        self.Author = b
        BookStore.NoOfBooks = self.NoOfBooks + 1

    def Display(self):
        print(f"{self.Name} by {self.Author}. No of Books {self.NoOfBooks}\n")

def main():
    obj1 = BookStore("Linus System Programming","Robert Love")
    obj1.Display()
    obj2 = BookStore("C programming","Dennis Ritchie")
    obj2.Display()

if __name__ == "__main__" :
    main()