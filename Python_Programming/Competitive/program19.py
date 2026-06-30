def CheckVowel(ch):
    Flag = False

    if (ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'):
        if ch == 'a' or ch == 'A' or ch == 'e' or ch == 'E' or ch == 'i' or ch == 'I' or ch == 'o' or ch == 'O' or ch == 'u' or ch == 'U' :
            Flag = True
        else:
            Flag = False
     
    else:
        
        Flag = -1
        
    return Flag

def main():
    Value = input("Enter Character : ")

    Ret = CheckVowel(Value)

    if Ret == True :
        print("Vowel")
    elif Ret == False:
        print("Consonent")
    else:
        print("Invalid Input")
    
if __name__ == "__main__":
    main()