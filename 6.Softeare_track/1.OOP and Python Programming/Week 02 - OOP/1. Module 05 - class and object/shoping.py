class Shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]

    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)

    def checkout(self,amount):
        total=0
        for item in self.cart:
            # print(item)
            total+=item['price']*item['quantity']
        # can write condtion , low amount mor amount etc ... 
            
        print('total price :',total)


Swapan=Shopping('alan swapon')
Swapan.add_to_cart('alu',50,6)
Swapan.add_to_cart('egg',15,3)
Swapan.add_to_cart('rice',50,5)
Swapan.checkout(500)
# print(Swapan.cart)
