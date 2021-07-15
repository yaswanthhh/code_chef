t = int(input())
while(t):
    n = int(input())
    n = str(n)
    c = int(0)   
    for i in n:
        if i == '4':   //subtask 2 was only satisfied... but output is right
            c = c + 1;  // counting number of 4s
    print(c)
    t = t-1
