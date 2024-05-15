class MyClass:
    def __init__(self):
        self.name = "imran"

class MyAge(MyClass):
    def __init__(self):
        super().__init__()
        self.age = 22

def solve():
    ag = MyAge()
    print(ag.name, ag.age)

if __name__ == "__main__":
    t = 1
    while t > 0:
        solve()
        t -= 1
