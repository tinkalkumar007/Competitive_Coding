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
    '''def addNode(self,prev_node,new_data):
        if prev_node.next is None:
            print("you aren't in linked list")
        new_node=Node(new_data)
        new_node.next=prev_node.next
        prev_node.next=new_node
       ''' 
    # find mid point of linked list
    def linkedlist_mid(self):
        slow=self.head
        fast=self.head
        while(fast and fast.next):
            slow=slow.next
            fast=fast.next.next
        print(slow.data)
#code execution start here
# let's create three node
if __name__=='__main__':
    llist=linkedlist()
    
    llist.push(4)
    llist.push(5)
    llist.pop(9)
    llist.pop(2)
    llist.pop(3)
    
    #llist.head.next=second;
    #second.next=third;
    
    llist.printList()
    llist.linkedlist_mid()
