from collections import deque
stack=deque()
for i in range(1,10,2):
    stack.append(i*i)
for j in range(1,10,2):
    print(stack.pop())
