def sort_fn(a,n):
    if n==1:
        return True
    if(a[0]<a[1] and sort_fn(a[1:],n-1)):
        return True
    else:
        return False
list1=list(map(int,input().split()))
n=len(list1)
if sort_fn(list1,n):
    print("Sorted")
else:
    print("Not Sorted")