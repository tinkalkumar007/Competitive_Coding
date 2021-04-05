list2=[]
for i in range(32):
    list2.append(0)
def unique_no(a,n):
    c=0
    for i in range(n):
        mask=a[i]
        j=0
        while(mask>0):
            if(mask&1):
                list2[j]+=1
            mask=mask>>1
            j+=1
        if(j>c):
            c=j
    count=0
    for j in range(len(list2[:c+1])):
        list2[j]=list2[j]%3
        mask=list2[j]
        count+=(mask<<j)
    return count
list1=list(map(int,input().split()))
print(unique_no(list1,len(list1)))