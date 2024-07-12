# encapsulation concept of Inheritance in python

class Abdul:
    _weapon= "AK47"    #   "_"  - protected member
    __maqsadon= 1      #   "__" - private member
    humanityLevel= "100%"      #   ""   - public member

    def __init__(self): 
        if(self.__maqsadon):
            print("Abdul maqsad on")
            print("Weapon: "+ self._weapon)
        else:
            print("Abdul maqsad off")

class Jethalal(Abdul):
    def __init__(self):
        Abdul.__init__(self)
        print("Fake Humanity:"+ Abdul.humanityLevel)

        #?we can't access this members because of thier scope (private and protected)
        # print("weapon: "+ Abdul._weapon)   
        # print("Maqsad on:"+ Abdul.__maqsadon)

abdul=Abdul()
print("Fake Humanity:"+abdul.humanityLevel)
print("weapon: "+ abdul._weapon)
# print("Maqsad on:". abdul.__maqsadon) -we can't access this member because it is private


jethalal= Jethalal()

