class Company:
    def __init__(self,cname,location) -> None:
        self.cname=cname
        self.location=location
        pass

    def company_details(self):
        print('Company Name = ',self.cname," Locattion = ",self.location)
    
class Person:
    def __init__(self,pname,age) -> None:
        self.pname=pname
        self.age=age
    def peron_details(self):
        print("Name = ",self.pname," Age= ",self.age)

class Employee(Company,Person):
    def __init__(self,emp_name,emp_age,cmp_name,cmp_location) -> None:

        # sorashori multiple inheritance arr khatre clas nam dea cll korai vlo.
        # multiple ar khare must lagbe ashob... consturctor...
        Person.__init__(self,emp_name,emp_age)
        Company.__init__(self,cmp_name,cmp_location)


obj_emp=Employee("imran",22,"myComp","dhaka")

obj_emp.company_details()
obj_emp.peron_details()

