x=int(input("Search No. "))
list1=list(map(int,input().split()))
n=len(list1)//2
a=0
if list1[n]>x:
    a=n//2
    if list1[a]>x:
        for i in range(a):
            if list1[i]==x:
                print("index of No is",i)
    elif list1[a]<x:
        for i in range(a,n):
            if list1[i]==x:
                print("index of No is",i)
    else:
        print("index of no.",a)
elif list1[n]<x:
    a=(n+len(list1))//2
    if list1[a]>x:
        for i in range(n,a):
            if list1[i]==x:
                print("index of No is",i)
    elif list1[a]<x:
        for i in range(a,len(list1)):
            if list1[i]==x:
                print("index of No is",i)
    else:
        print("Index of No.",a)
elif list1[n]==x:
    print("Index of No.",n)
else:
    print("Search no is not in list")
