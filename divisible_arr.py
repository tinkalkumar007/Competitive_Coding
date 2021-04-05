# A good subarray is the whose sum is divisible by no of element of array or len of array.
# So first we will generate all subarray and then sum of them so this is gonna to be take O(N^2). Not the prismatic one.
# Or we compute through brute force approach.
# Or can be computed by cumulative sum approach.
# but these all are not most prismatic, So let's go to most prismatic one.
# pigeonhole application.
def arr(a,n):
    cum=0
    for i in range(n):
        a[i]+=cum
        cum=a[i]
        a[i]=cum%n
    list2=[0]*n
    list2[0]=1
    count=0
    for i in a:
        list2[i]+=1
    for i in list2:
        count+=(i*(i-1))//2
    return count
list1=list(map(int,input().split()))
n=len(list1)
print(arr(list1,n))