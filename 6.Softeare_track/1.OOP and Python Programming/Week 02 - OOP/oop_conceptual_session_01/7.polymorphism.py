class Calculator:
    def add(self,a,b):
        print(a+b)

    def add(self,a,b,c):
        print(a+b+c)

abc=Calculator()
abc.add(1,2)
abc.add(1,2,3)

# The problem with this code is that the Calculator class has two add methods, but they have the same name. In Python, method overloading (defining multiple methods with the same name but different parameters) isn't directly supported as it is in some other languages like Java.


# solved code,

class Calculator:
    def add(self, a, b, c=None):
        if c is None:
            print(a + b)
        else:
            print(a + b + c)

abc = Calculator()
abc.add(1, 2)
abc.add(1, 2, 3)


