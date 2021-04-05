def fn(a,i,n,key):
    if i==n:
        return -1
    if a[i]==key:
        return i
    return fn(a,i+1,n,key)
list1=list(map(int,input().split()))
n=len(list1)
key=int(input())
c=fn(list1,0,n,key)
if c==-1:
    print("No is not present")
else:
    print(c)
