s=input("Enter No. ")
p=s
if int(s[0])==9:
    for i in range(1,len(s)-1):
          if (9-int(s[i]))>int(s[i]):
                #print(s)
                continue
          else:
                s=s[1:].replace(s[i],str(9-int(s[i])))
    s="9"+s              
else:
    for i in range(0,len(s)):
          if (9-int(s[i]))>int(s[i]):
                #print(s)
                continue
          else:
                s=s.replace(s[i],str(9-int(s[i])))
                #print(s)               
print(s)
