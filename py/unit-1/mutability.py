#mutability example with touple and list
#what is mutability?
# the power to able to modify any sequenced data like list is called mutability
# in python list dictionary are mutable and tuple is imutable

# ex.
import random
def modify(list):
    lst.append(5454)
    list.append(random.randint(34,65))
    lst.remove(4)
    lst.sort()



print("Mutability & imutability example")

tpl=(1,2,3,5,4)
print("touple before data:",tpl)

# tpl.sort() - not posible because touple is imutable

lst=list(tpl)

modify(lst)

tpl= tuple(lst)
print("touple after data:",tpl)
