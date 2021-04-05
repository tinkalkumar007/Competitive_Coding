n=int(input())
m=int(input())
c=m
a=0
list2=[]
for i in range(n):
    list1=list(map(int,input().split()))
    list2.append(list1)
list3=list2.copy()
for i in range(n):
    for j in range(m):
        a=list2[i][j]
        list3[j][c-1]=a
    c-=1
print(list3)
