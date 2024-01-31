class Student:
    def __init__(self,name,id) -> None:
        self.name=name
        self.__id=id 
        #__double underscore make it private!
        # ekta dela protected hye jbe ! 
    def details(self):
        print("Name : ",self.name," id= ",self.__id)
    

ob=Student("imran",3)
ob.details()

ob.__id=0

# after change ,

ob.details()

print(ob.__dict__) 

# error na delao new ekta property toire korbe , jodio change korte parteche na ! that's reason is private . 

