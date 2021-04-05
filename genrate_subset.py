def subsets(a,n):
    i=0
    while(n>0):
        if (n&1):
            print(a[i],end="")
        else:
            print("",end="")
        i+=1
        n=n>>1
    print('\n')
def subsets_gnrt(a):
    count=len(a)
    n=(1<<count)
    for i in range(n):
        subsets(a,i)
a=input()
subsets_gnrt(a)
