def fn(n):
    if n==0:
        return 4
    f1=fn(n-1)
    f2=fn(n-2)
    return f1+f2
n=int(input())
print(fn(n))