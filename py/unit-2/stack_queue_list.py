# demonstrate and describe stack, queue, list in python

#! stack:
'''
    -> the list who follows LIFO (Last in First Out) algorithm are called as stack
    -> stack methods:
            pop()       - pops last value from the list
            push(value) - adds an element in the list 
            peek()      - returns current top element value
'''

#ex:
def stack():
    stack= [43,65,67,878,98]

    stack.append(54)
    stack.pop()
    print(stack[-1])#peek in list

print("stack:")
stack()

#! queue:
'''
    -> the list who follows FIFO (First in First Out) algorithm are called as queue
    -> queue is list where first added(enqueue) element get's dequeued first
    -> it adds element(enqueue) from rear and removes from the front
    -> queue methods:
            dequeue()       - deletes last value from the list
            enqueue(value)  - adds an element in the list from rear
            peek()          - returns current first element value
'''
#ex:
def queue():
    queue= [43,65,67,878,98]

    queue.append(54)
    queue.pop(0)
    print(queue[0])#peek in list

print("queue:")
queue()


#! list:
'''
    -> list a dynamic data structure in python which doesn't follow any algorithm,
        we can create, update, modify and delete any ele from anywhere

    -> list methods:
            append(item): Add an element to the end of the list.
            insert(index, item): Insert an element at a specific index.
            pop(): Remove and return the last element (default) or element at a specific index.
            remove(item): Remove the first occurrence of a specific element.
            index(item): Return the index of the first occurrence of a specific element.
            Many other methods for searching, sorting, and modifying elements.
'''

#ex:
def lst():
    lst= [43,65,67,878,98]

    lst.append(54)
    lst.insert(0,4334)
    lst.pop()
    lst.remove(65)
    lst.index(43)
    lst[0]#peek in list

print("list:")
lst()