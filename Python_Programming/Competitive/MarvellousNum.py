def ChkPrime(Data):
    Ans = list()
    
    for i in Data:
        flag = False

        for no in range(2,int(i/2)+1):
            if i % no == 0:
                flag = True
                break
            
        if flag == False:
            Ans.append(i)
    return Ans
