list1=list(map(int,input().split()))
def unique(a,n):
    res=0
    for i in range(n):
        res=res^list1[i]
    i=0
    temp=res
    while(temp>0):
        if(temp&1):
            break
        i+=1
        temp=temp>>1
    mask=(1<<i)
    firstNo=0
    for i in range(n):
        if((mask&list1[i])!=0):
            firstNo=firstNo^list1[i]
    secondNo=res^firstNo
    print(firstNo,secondNo)
unique(list1,len(list1))

