x=int(input(""))
n=int(input(""))
list1=[]
list2=[]
c=0
temp=0
for i in range(n):
    a,b=input().split(maxsplit=1)
    list1.append(a)
    list1.append(b)
for i in range(3,len(list1),2):
    if(int(list1[i])==int(list1[i-2])):
        if(list1[i-1]>list1[i-3]):
            continue
        elif(list1[i-1]<list1[i-3]):
            temp=list1[i-1]
            list1[i-1]=list1[i-3]
            list1[i-3]=temp
print(list1)
for i in range(1,2*n,2):
    list2.append(list1[i])
list2.sort()
list2.reverse()
print(list2)
for i in list2:
    if int(i)>79:
        print(c)
        c=list1.index(i)-1
        print(list1[c],i)
