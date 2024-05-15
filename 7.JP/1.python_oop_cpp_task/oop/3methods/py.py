class MyClass:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def my_method(self):
        print(self.name, self.age)

def solve():
    class1 = MyClass("imran", 22)
    class1.my_method()

if __name__ == "__main__":
    t = 1
    while t > 0:
        solve()
        t -= 1
