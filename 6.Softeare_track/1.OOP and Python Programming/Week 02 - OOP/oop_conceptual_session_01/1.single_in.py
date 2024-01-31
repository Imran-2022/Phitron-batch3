class Animal:
    def __init__(self,name) -> None:
        self.name=name
    def eat(self):
        print(self.name,"I can eat")
    

class Cat(Animal):

    # animal class a ja ja thakbe sob kichu copy hye jabe akhane !!!!!

    # def __init__(self, name) -> None:
    #     super().__init__(name)

    # super ar khatre self dite hbe na !!!!!!!
    
    # def __init__(self, name) -> None:
    #     Animal.__init__(self,name)
    
    def speak(self,name):
        print("i can hello")

    
class Dog(Animal):
    # def __init__(self,name) -> None:
    #     self.name=name
    # def eat(self):
    #     print(self.name,"I can eat")

    def speak(self,name):
        print("i can hello")


c=Cat("cat")
c.eat()
d=Dog("dog")
d.eat()