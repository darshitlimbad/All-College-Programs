#? Inheritance types in Python
#for ex:
class A:
    def A(self):
        a=10


# 1. single inheritance: one parent class and one derived class
class B(A):
    def B(self):
        b=10

#2. Multiple Inheritance: many parent class and one derived class
class c(A,B): # class c(A):
    def C(self):
        c=10

#3. Multilevel Inheritance: A chain of one parent and one derived class
class D(B):
    def D(self):
        d=10

#4. Hierarchical Inheritance: one parent class and many derived class
class E(A):
    def E(self):
        e=10

#5. Hybrid Inheritance: All of the above types in one
class F(A,B):
    def F(self):
        f=10