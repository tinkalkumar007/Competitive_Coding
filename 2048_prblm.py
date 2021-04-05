spelling=['zero','one','two','three','four','five','six','seven','eight','nine']
def printf(n):
    global spelling
    if n==0:
        return
    printf(n//10)
    print(spelling[n%10],end=" ")
n=int(input())
printf(n)
print('\n')
