list1=list(map(int,input().split()))
temp=0
for i in range(0,len(list1),2):
    if(i>0 and list1[i]<list1[i-1]):
        temp=list1[i]
        list1[i]=list1[i-1]
        list1[i-1]=temp
    elif(i<=len(list1)-2 and list1[i+1]>list1[i]):
        temp=list1[i+1]
        list1[i+1]=list1[i]
        list1[i]=temp
print(list1)
