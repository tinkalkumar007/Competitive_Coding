import math
n=int(input())
count=0
m=int(math.sqrt(n))
if n==2:
    print("Prime No")
else:
    for i in range(2,m+1):
         if(n%i==0):
            count+=1
         else:
            continue
    if count==0:
         print("Prime NO.")
    else:
         print("Not a Prime No")