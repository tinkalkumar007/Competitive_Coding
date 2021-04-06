class Node:
     def __init__(self,data):
           self.data=data
           self.next=None
class LinkedList:
     def __init__(self):
           self.head=None
     # add node at Last
     def add_Node(self,new_data):
           new_node=Node(new_data)
           if self.head is None:
                 self.head=new_node
                 return
           last=self.head
           while(last.next):
                 last=last.next
           last.next=new_node
     # print Node
     def printLinkedlist(self):
           temp=self.head
           while(temp):
                 print(temp.data,end="->")
                 temp=temp.next
           print('\n')
     # take input data
     def InputData(self):
           list1=list(map(int,input().split()))
           n=len(list1)
           i=0
           while(i<n):
                llist.add_Node(list1[i])
                i+=1
     # reversing node
     def reversing(self):
           prev=None
           current=self.head
           while(current):
                Next=current.next
                current.next=prev
                prev=current
                current=Next
                head=prev
           self.head=prev
     #reversing recursion
     def printRec(self,temp):
           if temp:
                print(temp.data,end="->")
                self.printRec(temp.next)
                
           else:
                return
           
    
# linkedlist created
# code excution start
if __name__=='__main__':
    llist=LinkedList()
    llist.InputData()
    llist.reversing()
    llist.printLinkedlist()
    llist.printRec(llist.head)
    
     
