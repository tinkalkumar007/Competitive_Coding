def binary(a,i,n,key):
    if i==n:
        return
    mid=(i+n)//2
    if(a[mid]==key):
        return mid
    if(a[mid]>key):
        return binary(a,-1,mid-1,key)
    if(a[mid]<key):
        return binary(a,mid+1,n,key)
list1=list(map(int,input().split()))
key=int(input())
print(binary(list1,0,len(list1),key))