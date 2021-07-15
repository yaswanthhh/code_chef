import math
t = int(input())
while(t):
    n,k = map(int, input().split( ))
    array = list(map(int, input().split( )))
    bitarray = [0]*32
    for j in array:
        for i in range(32):
            if j & 1<<i:
                bitarray[i]+=1
    count = int(0)
    for i in range(32):
        count = count + math.ceil(bitarray[i]/k)
    print(count)
    t=t-1
