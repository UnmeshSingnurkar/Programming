import threading

Counter = 0
Lock = threading.Lock()

def Increment():
    global Counter

    for i in range(10):
        Lock.acquire()
        Counter = Counter + 1
        Lock.release()

def main():

    Thread1 = threading.Thread(target=Increment)
    Thread2 = threading.Thread(target=Increment)
    Thread3 = threading.Thread(target=Increment)

    Thread1.start()
    Thread2.start()
    Thread3.start()

    Thread1.join()
    Thread2.join()
    Thread3.join()

    print("Final Value :", Counter)

if __name__ == "__main__":
    main()