#this code didnt work
t = int(input())
while(t):
    c = int(0)
    n = int(input())
    for i in range(13):
        if n & 1<<i:
            c = c+1
    print(c)
    t = t-1
#########################
lst=[2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1]
t = int(input())
while(t):
    s=0
    n = int(input())
    for i in lst:
        if n>=i:
            s+=n//i
            n=n%i
    print(s)
    t = t-1
