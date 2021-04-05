def fact(n):
    if n==0:
        return 1
    ans=n*fact(n-1)
    return ans
n=int(input())
print(fact(n))