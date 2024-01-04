# poly--> many(multiple)
# morph--> shape

class Animal:
    def __init__(self,name) -> None:
        self.name=name
    
    def make_sound(self):
        print('animal making some sound')

    
class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print("gegege")

don = Cat('real don')
don.make_sound()
don = Dog('real don')
don.make_sound()

        