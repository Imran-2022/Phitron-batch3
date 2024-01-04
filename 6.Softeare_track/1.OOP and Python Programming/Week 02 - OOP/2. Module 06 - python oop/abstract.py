from abc import ABC,abstractmethod
# abstract base class

class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat method . 

    def eat(self):
        print('normal print')
    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self,name) -> None:
        self.name=name
        super().__init__()
    def eat(self):
        print('hey na na nannannan')
    def move(self):
        print("don't look back , just move on!")

layka=Monkey('lucky')
layka.eat()
layka.move()