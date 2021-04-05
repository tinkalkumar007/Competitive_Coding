a=int(input("Enter a "))
b=int(input("Enter b "))
a=a^b # this is xor oprator, if both side are same then it will return 0 else 1.
b=b^a #here a is a^b and b become b^a^b so b & b got cancel and only a remains.
a=a^b #here b is b^a and a become a^b^a so a & a got cancel and only b remains.
print(f"Value of a is",a,"and value of b is",b)