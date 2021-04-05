n=input()
j=0
count=0
a=len(n)-1
for i in range(a,-1,-1):
    if(int(n[i])==7):
        j=(-((n.index(n[i],i))-a))
        count+=(2**j)
    else:
        continue
for i in range(len(n)):
    count+=(2**i)
print(count)