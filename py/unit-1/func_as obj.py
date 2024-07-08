# this program demostrates how function as object works in python


#step 1: initialize and declare a normal function
def normal_function():
    print("hello how are you")


#step 2: initialize a varible and declare it with function name
        #variable name doesn't affect on it's behavior
obj= normal_function

#step 3: call the funtion with virtually created object
obj()