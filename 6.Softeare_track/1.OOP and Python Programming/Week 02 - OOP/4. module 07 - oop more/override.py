class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
    def eat(self):
        print('vat mango polau korma')
    
    def exercise(self):
        raise NotImplemented
 
class Cricketer(Person):
    def __init__(self, name, age, height, weight,team) -> None:
        self.team=team
        super().__init__(name, age, height, weight)

        # override

    def eat(self):
        print('vegetable')

    def exercise(self):
        print("do what you love to do")

    def __add__(self,other): # add both
        return self.age+other.age
    


sakib=Cricketer('sakib',254,68,91,'BD')
rakib=Cricketer('rakib',23,24,24,'BD')
# sakib.eat()
# sakib.exercise()


# example of operator overloading !!! 
 
print(45+46) # sum up
print('sakib'+'rakib') #concat
print([1,23]+[124,5]) #compbe two lst

print(sakib+rakib)
