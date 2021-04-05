def funcn(a,b):
    if b==1:
        return a
    ans=a*funcn(a,b-1)
    return ans
def fastPower(a,b):
    if b==0:
        return 1
    smallAns=fastPower(a,b//2)
    smallAns*=smallAns
    if(b&1):
        return a*smallAns
    else:
        return smallAns
a,b=input().split()
print(funcn(int(a),int(b)))
print(fastPower(int(a),int(b)))