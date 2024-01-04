class Laptop:
    def __init__(self,brand,price,color,memory) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.memory=memory

        pass
    def run(self):
        return f'runnnig laptop : {self.brand}'
    
    def coding(self):
        return f'learning python and practiceing'

class Phone:

    def __init__(self,brand,price,color,dual_sim) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.dual_sim=dual_sim
    
    def run(self):
        return f'fun tipa tipy'

    def phone_call(self,number,text):
        return f'sending sms to {number} with {text}'
    

class Camera:
    def __init__(self,brand,price,color,pixel) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.pixel=pixel

    def run(self):
        pass

    def change_lens(self):
        pass



        