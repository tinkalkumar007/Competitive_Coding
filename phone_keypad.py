def fn(s1,s2,i,n):
    if(i==n):
        return s2[i]
    f2=fn(s1,s2,i+1,n)
    f1=s1[i]
    print(f1+f2)
fn("abc","mno",0,2)