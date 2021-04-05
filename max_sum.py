list1=list(map(int,input().split()))
current_sum=0
maxsum=0
for i in range(0,len(list1)):
      for j in range(i,len(list1)):
            current_sum=0 #it is compulsory to write here otherwise sum will added up. 
            for k in range(i,j+1):
                  current_sum+=list1[k]
            # printing all subarray
            #print(current_sum)
            if current_sum>=maxsum:
               maxsum=current_sum
print(maxsum)
                
