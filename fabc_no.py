def fabc(n):
    if(n==0 or n==1):# base case is n==0,n==1
        return n
    # recursion function is f(n)=f(n-1)+f(n-2)
    f1=fabc(n-1)
    f2=fabc(n-2)
    return f1+f2
n=int(input())
print(fabc(n))