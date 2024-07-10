#mutability example with tuple and list
#what is mutability?
# the power to able to modify any type of data like list is called mutability
# in python list dictionary are mutable and tuple is imutable

# ex.
import random
def modify(list):
    lst.append(5454)
    lst.append(random.randint(34,65))
    lst.remove(4)
    lst.sort()



print("Mutability & imutability example")

tpl=(1,2,3,5,4)
print("tuple before data:",tpl)

# tpl.sort() - not posible because tuple is imutable

lst=list(tpl)

modify(lst)

tpl= tuple(lst)
print("tuple after data:",tpl)
