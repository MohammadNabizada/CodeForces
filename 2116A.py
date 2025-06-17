t = int(input())

while t > 0:
    a,b,c,d = [int(x) for x in input().split()]
    if c >= d:
        print("Gellyfish")
    else: 
        print("Flower")
    
