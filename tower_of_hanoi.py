def tower(n,src,dest,helper):
    # base case
    if n==0:
        return
    #recursive case
    tower(n-1,src,helper,dest)
    print(f"move",n,"disk from",src,"to",dest)
    tower(n-1,helper,dest,src)
n=int(input())
tower(n,'A','C','B')
