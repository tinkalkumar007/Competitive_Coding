n=int(input(""))
m=int(input(""))
list2=[]
a=0
for i in range(n):
    list1=list(map(int,input().split()))
    list2.append(list1)
for i in range(n):
    for j in range(m):
        a=0
        if i==j:
            continue
        elif i>j:
            continue
        else:
            a=list2[i][j]
            list2[i][j]=list2[j][i]
            list2[j][i]=a
for i in list2:
    i.reverse()
    print(i)
