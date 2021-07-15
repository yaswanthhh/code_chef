t = int(input())
while(t):
    array = list(map(int, input().split( )))
    array = sorted(array)
    print(array[1])
    t = t-1
