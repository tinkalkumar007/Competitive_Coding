list1=list(map(int,input().split()))
list2=list1.copy
current_sum=0
maxsum=0
for i in range(1,len(list1)):
    list1[i]=list1[i-1]+list1[i]
for i in range(0,len(list1)):
    for j in range(i,len(list1)):
        current_sum=0
        current_sum=list1[j]-list1[i-1]
    if maxsum<current_sum:
        maxsum=current_sum
print(maxsum)

