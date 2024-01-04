class Bank:
    def __init__(self,holder_name,initial_diposit) -> None:
        self.holder_name=holder_name #public attribute .
        self._balance=initial_diposit # _something - protected!
        self.__balance=initial_diposit #(2)under__score make it private !
        
    def deposit(self,amount):
        self.__balance+=amount
    
    def get_balance(self):
        return self.__balance
    
    def withdraw(self,amount):
        if amount<self.__balance:
            self.__balance-=amount
            return amount
        else:
            return f'Fokira taka nai !'
            
    
rafsun=Bank('choooto bro',4054)
print(rafsun.holder_name)
# rafsun.balance=0
print(rafsun.balance) 