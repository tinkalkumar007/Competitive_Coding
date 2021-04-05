list1=list(map(int,input().split()))
list2=list1.copy()
for i in range(0,len(list1)):
     list1[i]=list1[i]*list1[i]
     # this will update array by square of each element.
print(list1)
j=len(list1)
for i in range(0,len(list1)):
     j-=1
     list2[i]=list1[j]
     # reversing list1
print(list2)
     
