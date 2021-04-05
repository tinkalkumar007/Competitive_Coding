def countBits(n):
    count = 0
    while (n > 0):
        count += (n & 1) #if n is 1 and operator will give 1 otherwise it will be zero.
        n = n >> 1 #right shift will divide no by 2 power 1. i.e. a>>b ==a/2^b.
    return count
def countBitsfast(n):
    count=0
    while(n>0):
        count+=1
        n=n&(n-1) # this is also a quick hack to count bits.
    return count
n = int(input(""))
print(countBits(n))
print(countBitsfast(n))