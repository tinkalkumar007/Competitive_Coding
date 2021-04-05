s=input("Enter Name: ")
n=int(input("Reverse No."))
list1=[]
for i in s:
    list1.append(i)
for i in range(n):
    list1.append(i)
list2=list1.copy()
for i in range(0,len(s)):
    list2[n+i]=list1[i]
list3=list2.copy()
j=len(list3)-1
for i in range(n-1,-1,-1):
    list3[i]=list2[j]
    j-=1
a=list3[:j+1]
c=list(map(lambda b: b.replace(",",""), a)
print(c)
