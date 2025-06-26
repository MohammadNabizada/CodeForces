t = int(input())


while t > 0:
    n,k = map(int,input().split())

    if n == k:
        print("1"*k,"\n")
    else:    
     print("10"*k+(n-2*k)*"0","\n")
    t+=-1