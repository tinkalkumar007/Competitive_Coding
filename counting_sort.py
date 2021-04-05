list1=list(map(int,input().split()))
list2=[]
for i in range(max(list1)+1):
    list2.append(0)
for i in list1:
    list2[i]+=1
for i in range(len(list2)):
    if list2[i]==1:
        print(list2.index(list2[i],i),end=" ")
    elif list2[i]==0:
        continue
    elif list2[i]>1:
        for j in range(list2[i]):
            print(list2.index(list2[i],i),end=" ")
