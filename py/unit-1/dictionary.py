# This program demonstrates Dictionary in Python Programming Language

# dictionary is a one type of hash-map data storage to store data in key value pairs
#! remember if the key exists in dict it will update it's value with new otherwise creates new key and value pair

#step - 1 : to create a dictionary in puthon the '{}' brackets are used
dit= {'name':'ashokaa','work':'idle',"age":"idk"}

#step - 2: to access keys and values there is many methods available in puthon , many of them are shown below:

print("before:",dit)

dit['name']="darshit"
print(dit.get("name"))
dit.update({"id":"2323","hell":"welcome"})
dit.pop("hell")
del dit["id"]
dit.popitem()
print(dit.values())

print("after:",dit)
dit.clear()
del dit

