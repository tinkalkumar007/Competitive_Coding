def fn(n):
    if n==0:
        return
    fn(n-1)
    print(n,end=" ") # if u write print function after function call then it will print in increasing order.
def fn1(n):
    if(n==0):
        return
    print(n,end=" ") # if u write print function before function call this will print in decreasing order
    fn1(n-1)
n=int(input())
fn(n)
print('\n')
fn1(n)
print('\n')