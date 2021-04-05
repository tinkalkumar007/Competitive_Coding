list1=list(map(int,input().split()))
list2=[]
for i in range(0,len(list1)):
      for j in range(i,len(list1)):
            for k in range(i,j+1):
                  list2.append(list1[k])
            # printing all subarray
            print(list2)
            list2.clear()
                
