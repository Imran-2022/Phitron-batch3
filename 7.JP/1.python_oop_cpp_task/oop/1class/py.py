class MyClass:
    def __init__(self, name='', age=0):
        self.name = name
        self.age = age

def solve():
    class1 = MyClass(name="imran", age=22)
    print(class1.name, class1.age)

if __name__ == "__main__":
    t = 1
    while t > 0:
        solve()
        t -= 1
