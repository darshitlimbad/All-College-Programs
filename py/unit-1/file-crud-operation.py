#this is file crud operation 
# it means from this file you can create a new file , edit existing file ,
#  add new data, overwrite the file, removefile etc...
import os

def createFile(fileName):
    if os.path.exists(fileName) :
        print("File already exists.")
    else:
        f= open(fileName,'x')
        print("File created succesfully.")

def pwd():
    print(os.getcwd())

def read(fileName):
    if os.path.exists(fileName) :
        f= open(fileName,'r')
        print(f.read())
    else:
        print("File doesn't exist.")

def write(fileName):
    # if os.path.exists(fileName) :
    f=open(fileName,'w')
    f.write(input("enter data to write into file:"))

    print("File data has been updated succesfully.")

    # else:
    #     print("File doesn't exist.")

def append(fileName):
    # if os.path.exists(fileName) :
    f=open(fileName,'a')
    f.write(input("enter data to write into file:"))

    print("File data has been appended succesfully.")

    # else:
    #     print("File doesn't exist.")

def remove(fileName):
    if os.path.exists(fileName) :
        print("\033[34m","are you sure you want to delete "+ fileName + " ? ans: yes/no","\033[0m")
        confirmation=input("=>")
        if(confirmation == "yes"):
            os.remove(fileName)
            print("File deleted succesfully.")
        else:
            print("Deletion cancelled.")
    else:
        print("File doesn't exist.")

print("--- FILE CRUD OPERATION --- ")

print("choose your option:")
print("x [filename] - to create new file")
print("r [filename] - to read existing file data")
print("w [filename] - to write/overwrite data in existing file or create new file")
print("a [filename] - to append data in existing file or create and write in new file")
print("rm [filename]- to remove existing file")
print("pwd          - present working directory")
print("exit         -  to exit this program")
print('\033[31m',"NOTE: file name with extention." ,'\033[0m' )

while(True):
    command= str(input("=>"))
    command= command.split(" ")

    if command[0] == "exit" or len(command) <= 1 and command[0] != "pwd":
        break
    elif command[0] == "pwd" :
        pwd()
    elif command[0] == "x" :
        createFile(command[1])
    elif command[0] == "r" :
        read(command[1])
    elif command[0] == "w" :
        write(command[1])
    elif command[0] == "a" :
        append(command[1])
    elif command[0] == "rm":
        remove(command[1])
    else:
        print("command not found. ")

    print("---------------------------------------------------------------------------------")
    print("---------------------------------------------------------------------------------")
    print("---------------------------------------------------------------------------------")