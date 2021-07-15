lst = [100,50,10,5,2,1]
for i in range(int(input())):
    n = int(input())
    s = 0
    for j in range(6):
        if(n>=lst[j] and n>=0):
            s = s + (n//lst[j])
            n = n%lst[j]
    print(s)
