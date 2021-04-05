def extract_bit(n,i):
    count=(n&(1<<i))
    if count!=1:
        return 1
    else:
        return 0
# Chnage ith bit of a no to 1
def change_bit(n,i):
    count=(1<<i)
    return(n|count)
# change ith  bit of a no to 0
def change_bitTozero(n,i):
    count=1<<i
    return(n&~count)
n,i=input("").split()
print(change_bitTozero(int(n),int(i)))
print(change_bit(int(n),int(i)))
print(extract_bit(int(n),int(i)))