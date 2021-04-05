n=int(input(""))
m=int(input(""))
sr=0
list2=[]
x=int(input("Search No. "))
for i in range(n):
    list1=list(map(int,input().split()))
    list2.append(list1)
def fn1(a,i,ec):
    
    while(a<x):
        i+=1
        a=list2[i][ec]
    while(a>x):
        ec-=1
        a=list2[i][ec]
    return(a,i,ec)
#print(a)
c,j,er=fn1(list2[sr][m-1],0,m-1)
if(c>x):
    c,j,er=fn1(c,j,er)
    if(c==x):
        print(f"No.",c,"is present at row",j+1,"column",er+1)
elif(c<x):
    c,j,er=fn1(c,j,er)    
    if(c==x):
        print(f"No.",c,"is present at row",j+1,"column",er+1)
elif(c==x):
    print(f"No.",c,"is present at row",j+1,"column",er+1)
    
