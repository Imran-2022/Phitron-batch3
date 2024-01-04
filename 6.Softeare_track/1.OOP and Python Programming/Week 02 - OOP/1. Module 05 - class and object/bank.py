class Bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=10000
    
    def get_balance(self):
        return self.balance

    def deposit(self,amount):
        if amount>0:
            self.balance+=amount

    def withdraw(self,amount):
        if amount<self.min_withdraw:
            print (f'not possible')
        elif amount>self.max_withdraw:
            print (f'not possible')
        else:
            self.balance-=amount
            print (f'here is your money {amount}')
            print(f'after widthraw balance {self.get_balance()}')
            
brac=Bank(1500)
brac.withdraw(480)
