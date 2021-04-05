n=int(input(""))
m=int(input(""))
sc=0
list2=[]
for i in range(n):
    
    list1=list(map(int,input().split()))
    list2.append(list1)
sr=0
er=n
ec=m
while(sr<=er):
    for i in range(sc,ec):
        print(list2[sr][i])
    sr+=1
    for i in range(sr,er):
        print(list2[i][ec-1])
    ec-=1
    if(er>sr):
        for i in range(ec-1,sc-1,-1):
             print(list2[er-1][i])
        er-=1
    if(sc<ec):
        for i in range(er-1,sr-1,-1):
             print(list2[i][sc])      
        sc+=1
