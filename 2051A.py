t = int(input()) 
while t > 0:
      t -= 1
      n = int(input())
      a = [int(x) for x in input().split()]
      b = [int(x) for x in input().split()]
      result = a[-1] 
      for index in range(n-1):
          difference = (a[index] - b[index + 1])
          result += max(difference,0)

      print(result)


