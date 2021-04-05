n=int(input("Enter size of array: "))
list1=list(map(int,input().split()))
a=0
i=0
for j in range(len(list1)):
    i=0
    while(i<n-1):
        if(list1[i]>list1[i+1]):
            a=list1[i]
            list1[i]=list1[i+1]
            list1[i+1]=a
        else:
            continue
        i+=1
    n-=1
print(list1)
