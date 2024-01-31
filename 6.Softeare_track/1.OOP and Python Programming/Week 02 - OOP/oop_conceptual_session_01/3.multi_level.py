class GrandFather:
    def __init__(self) -> None:
        pass
    def property(self):
        print("I have 5 corer tk")

class Father(GrandFather):
    def property(self):
        print("i have 3 corer tk")
    def father_property(self):
        # amra super dea access or call korte pari !! that's wow !
        super().property()


class Child(Father):
    pass


ami=Child()
ami.property()
ami.father_property()