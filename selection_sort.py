n=int(input())
list1=list(map(int,input().split()))
a=0
b=0
c=0
for i in range(n):
    a=list1[i]
    c=a
    for j in range(i+1,n):
        if a>list1[j]:
            b=j
            a=list1[j]
            print(b,a)
        else:
            continue
    if c==a:
        continue
    else:
        list1[i]=a
        list1[b]=c
print(list1)
