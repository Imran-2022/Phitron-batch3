class MyClass:
    def __init__(self):
        self.name = "imran"

    def my_name(self):
        print(self.name)

class Another(MyClass):
    def my_name(self):
        print(self.name, self.name)

def solve():
    class1 = Another()
    class1.my_name()

if __name__ == "__main__":
    t = 1
    while t > 0:
        solve()
        t -= 1
