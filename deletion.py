# Node class
class Node:
    # function to initilaize node object, Node is created
    def __init__(self,data):
        self.data=data# data assign 
        self.next=None# initilize next as null
    # Linked list class contain a node object 
class linkedlist:
    def __init__(self):
        self.head=None
    # add a node at first
    def push(self,new_data):
        self.new_data=new_data
        # create a node
        new_node = Node(new_data)
        new_node.next=self.head
        self.head=new_node
    # add a node at the end
    def pop(self,new_data):
        new_node=Node(new_data)
        if self.head is None:
            self.head=new_node
            return
        last=self.head
        while(last.next):
            last=last.next
        last.next=new_node
        
    #this function prints content of linked list
    #starting from head  
    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data,end="->")
            temp = temp.next
        print('\n')
    # add a node within the nodes	
    def addNode(self,prev_node,new_data):
        if prev_node.next is None:
            print("you aren't in linked list")
        new_node=Node(new_data)
        new_node.next=prev_node.next
        prev_node.next=new_node
    #deletion of a node
    def deleteNode(self,key):
        temp=self.head
        if temp is not None:
           if temp.data==key:
              self.head=temp.next
              temp=None
              return
        while(temp):
           if temp.data==key:
              break
           prev=temp
           temp=temp.next
       # key is not present
        if(temp):
              return 
        prev.next=temp.next
        temp=None
        return
    #searching for a data
    def linearSearch(self,key):
        temp=self.head
        while(temp):
              if(temp.data==key):
                     print("key is present")
                     break
              temp=temp.next
    #take linked list input from user
    def UserInput(self):
        list1=list(map(int,input().split()))
        n=len(list1)
        i=0
        while(i<n):
              llist.pop(list1[i])
              i+=1      
# code execution start here
# let's create three node
if __name__=='__main__':
    llist=linkedlist()
    
    #llist.push(4)
    #llist.push(5)
    #llist.pop(9)
    #llist.pop(2)
    #llist.addNode(llist.head.next,6)
    #llist.deleteNode(5)
    
    llist.linearSearch(5)
    llist.UserInput()
    
    #llist.head.next=second;
    #second.next=third;
    
    llist.printList()
