def Array_add(a,b):
   Array={"Jan":2200,"Feb":2350,"Mar":2600,"Apr":2130,"May":2190}
   return(Array[b]-Array[a])
print(Array_add("Jan","Feb"))
exp=0
j=0
list1=[2000,2350,2600,2000,2190]
list2=["Jan","Feb","Mar","Apr","May"]
for i in list1:
    exp+=i
    if i==2000:
       
       print(f"You have spent",i,"amount in month",list2[list1[j:].index(i)])
       print(list1[j:].index(i))
       j+=1
if j==0:   
    print("You havn't spent 2000 amount in any month")    
print(f"Total",exp)

