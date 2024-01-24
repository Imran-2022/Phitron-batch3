# base class,parent class , common attribute + functionality class.
# derived class  , child class , uncommon attribute + functionality class

class Gadget:
    def __init__(self,brand,price,color,origin) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin

    def run(self):
        return f'running laptop: {self.brand}'


class Laptop:
    def __init__(self,memory,ssd) -> None:
        self.memory=memory
        self.ssd=ssd

    def coding(self):
        return f'learning python and practiceing'

class Phone(Gadget):
    def __init__(self,brand,price,color,origin,dual_sim) -> None:
        self.dual_sim=dual_sim
        super().__init__(brand,price,color,origin)
    
    def phone_call(self,number,text):
        return f'sending sms to {number} with {text}'
    f
    def __repr__(self) -> str:
        return f'is dual sim {self.dual_sim}'

class Camera:
    def __init__(self,pixel) -> None:
        self.pixel=pixel

    def change_lens(self):
        pass



my_phn=Phone('iphone',1200,'siver','china',True)
print(my_phn.brand)
print(my_phn)
