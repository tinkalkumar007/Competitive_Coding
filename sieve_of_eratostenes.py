n=int(input())
list1=[0]*n
list1[2]=1
for i in range(3,n+1,2):
    list1[i]=1
for i in range(3,n+1,2):
    if(list1[i]):
        j=i**2
        while(j<=n):
            list1[j]=0
            j+=2*i
for i in range(n):
    if(list1[i]):
        print(i,end=" ")
print('\n')