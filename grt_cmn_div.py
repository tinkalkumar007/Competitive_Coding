# Ecluids algo to find out greatest common divisor
def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b) # here you need to return it will print None.
# This algo is useful if you want to find lcm of two no. LCM is gcd*LCM=a*b, so LCM=a*b/gcd
def lcm(a,b):
    return (a*b)/gcd(a,b)

m,n=input().split()
print(gcd(int(m),int(n)))
print(lcm(int(m),int(n)))