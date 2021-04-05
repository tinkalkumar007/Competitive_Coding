def sequence(a,out,i,j):
    #Base case
    if(a[i]==0):
        out[j]=0
        print(out,end=",")
        return
    #recursion case
    #1.include the current char
    out[j]=a[i]
    sequence(a,out,i+1,j+1)
    #2.exclude the current char
    print(i,j)
    sequence(a,out,i+1,j)
c=input()
j=0
a=[0]*100
for i in c:
    a[j]=i
    j+=1
out=[0]*100
sequence(a,out,0,0)