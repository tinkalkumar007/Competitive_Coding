def fn(a,b):
    if b==0:
        return 0
    ans=a+fn(a,b-1)
    return ans
a,b=input().split()
print(fn(int(a),int(b)))