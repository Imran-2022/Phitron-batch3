class Shopping:
    cart=[] #class attribute #static attribute
    # sob gula instance a share hobe ! 
    origin='china'

    def __init__(self,location) -> None:
        self.name='jamu na city' #instance attribute
        self.location='jam er maj khane'

    def purchase(self,item,price,amount):
        remaining = amount-price
        print(f'buying {item} for price: {price} and remaining : {remaining}')
    
    def hudai_dakhi(self,item):
        print('hudai dekhi kintu kinmu na',item)
        

Shopping.purchase('a',4,5,14)

