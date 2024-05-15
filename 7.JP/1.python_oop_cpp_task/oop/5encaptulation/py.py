class MyClass:
    def __init__(self):
        self.__name = "imran"

    # Setter
    def set_name(self, s):
        self.__name = s

    # Getter
    def get_name(self):
        return self.__name

def solve():
    class1 = MyClass()
    class1.set_name("imran")
    print(class1.get_name())

if __name__ == "__main__":
    t = 1
    while t > 0:
        solve()
        t -= 1
