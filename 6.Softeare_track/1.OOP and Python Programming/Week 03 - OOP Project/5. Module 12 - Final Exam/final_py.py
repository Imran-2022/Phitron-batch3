# account_

class Account():
    accounts=[]
    Loan_feature=True
    def __init__(self, name, email, address, accountType):
        self.name = name
        self.email = email
        self.address = address
        self.accountType = accountType
        self.accountNo = str(name)+email
        self.balance = 0
        self.transactions = []
        self.loan_taken = 0
        self.max_loan = 2
        Account.accounts.append(self)

# show all account details
        
    def show_info(self):
        print("Name:", self.name)
        print("Email:", self.email)
        print("Address:", self.address)
        print("Account Type:", self.accountType)
        print("Account Number:", self.accountNo)
        print("Balance:", self.balance)
        print()

# deposit
        
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            self.transactions.append(f"Deposited ${amount}")
            print(f"\n--> Deposited ${amount}. New balance: ${self.balance}")
        else:
            print("\n--> Invalid deposit amount")

# withdraw 
            
    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            self.transactions.append(f"Withdrew ${amount}")
            print(f"\n--> Withdrew ${amount}. New balance: ${self.balance}")
        elif amount > self.balance:
            print("\n--> Withdrawal amount exceeded")
        else:
            print("\n--> Invalid withdrawal amount")

# check total balance
            
    def check_balance(self):
        print(f"\n--> Available balance: ${self.balance}")
    
# check transaction history
        
    def check_transaction_history(self):
        print("\n--> Transaction History:")
        for transaction in self.transactions:
            print(transaction)

# take loan max 2 times only if Loan_feature is "True"
            
    def take_loan(self, amount):
        if self.loan_taken < self.max_loan and Account.Loan_feature :
            self.loan_taken += 1
            self.balance += amount
            self.transactions.append(f"Took a loan of ${amount}")
            print(f"\n--> Loan of ${amount} taken successfully.")
        else:
            print("\n--> Maximum loan limit reached.")

# transfer amount to another existing account 
            
    def transfer(self, amount, recipient_account):
        if recipient_account in Account.accounts:
            if amount > 0 and amount <= self.balance:
                recipient_account.deposit(amount)
                self.balance -= amount
                self.transactions.append(f"Transferred ${amount} to account {recipient_account.accountNo}")
                print("\n--> Transfer successful.")
            else:
                print("\n--> Insufficient balance for transfer.")
        else:
            print("\n--> Account does not exist.")

# create account 
            
class create_account(Account):
    def __init__(self,name, email, address, accountType):
        super().__init__(name, email, address, accountType)


# admin panel of myBank _

class Admin:
    def __init__(self):
        pass

# see all accounts
    
    def see_all_accounts(self):
        print("\n--> All User Accounts:")
        for account in Account.accounts:
            account.show_info()

# delete account
            
    def delete_account(self, account_no):
        for account in Account.accounts:
            if account.accountNo == account_no:
                Account.accounts.remove(account)
                print("\n--> Account deleted successfully.")
                return
        print("\n--> Account not found.")

# total balance
        
    def total_balance(self):
        total_balance = sum(account.balance for account in Account.accounts)
        print(f"\n--> Total Available Balance: ${total_balance}")

# total loan amount
        
    def total_loan_amount(self):
        total_loan = sum(account.loan_taken for account in Account.accounts)
        print(f"\n--> Total Loan Amount: ${total_loan}")

# toggle loan feature
        
    def toggle_loan_feature(self, state):
        if state == "on":
            Account.Loan_feature = True
            print("\n--> Loan feature turned ON.")
        elif state == "off":
            Account.Loan_feature = False
            print("\n--> Loan feature turned OFF.")
        else:
            print("\n--> Invalid state.")

def fn():

    # default admin info , name = admin, pass = 123

    admin_name="admin"
    admin_pass="123"

    current_user = None
    admin = Admin()

    while True:
        print("\nWelcome to  myBank")
        print("1. User")
        print("2. Admin")
        print("3. Exit")
        choice = int(input("Choose Option: "))

        if(choice==1):
            print("\nAs User : ")
            choice = input("\n--> new account/existing account (N/E) or exit (1): ").upper()

            # register new account !

            if choice == "N":
                name = input("Name: ")
                email = input("Email: ")
                address = input("Address: ")
                if not name or not email or not address:
                    print("\n--> Name, email, and address cannot be empty.")
                else:
                    accountType = input("Account Type (Savings/Current): ").capitalize()
                    if accountType not in ["Savings", "Current"]:
                        print("\n--> Invalid account type.")
                        break
                    current_user=create_account(name, email, address, accountType)
                    print("\n--> Account created successfully.")
            
            # login in existing account

            elif choice == "E":
                account_no = (input("Account Number: "))
                for account in Account.accounts:
                    if account.accountNo == account_no:
                        current_user = account
                        break
                else:
                    print("\n--> Account not found.")
            
            # back 
            elif choice == "1":
                break

            # while having logged in user 

            while(current_user!=None):
                print(f"welcome {current_user.name} to myBank");
                print("1. deposit")
                print("2. withdraw")
                print("3. check available balance")
                print("4. check transaction history")
                print("5. take loan at most two time")
                print("6. transfer amount to another account")
                print("7. Logout as user")
                option = int(input("Choose Option: "))

                # deposit amount 

                if option == 1:
                    amount = float(input("Enter deposit amount: "))
                    current_user.deposit(amount)
                
                # withdraw 
                    
                elif option == 2:
                    amount = float(input("Enter withdrawal amount: "))
                    current_user.withdraw(amount)
                
                # check existing balance
                    
                elif option==3:
                    current_user.check_balance()
                
                # check transaction history
                    
                elif option==4:
                    current_user.check_transaction_history()
                
                # take loan max two times
                    
                elif option == 5:
                    amount = float(input("Enter loan amount: "))
                    current_user.take_loan(amount)
                
                # amount transfar from one account to another account 
                    
                elif option == 6:
                    recipnt_acc_no = (input("Enter recipient account number: "))
                    recipnt_acc = None
                    for account in Account.accounts:
                        if account.accountNo == recipnt_acc_no:
                            recipnt_acc = account
                            break
                    if recipnt_acc:
                        amount = float(input("Enter transfer amount: "))
                        current_user.transfer(amount, recipnt_acc)
                    else:
                        print("\n--> Recipient account not found.")

                # back
                        
                elif option == 7:
                    current_user = None
                    break
                else:
                    print("\n--> Invalid option.")
            
        elif(choice==2):
            print("\nwelcome to admin panel")
            admin_name=input("Enter admin name : ")
            admin_pass=input("Enter admin password : ")
            
            # use as admin 

            while(admin_name=="admin" and admin_pass=="123"):
                print("1. create account")
                print("2. delete user account")
                print("3. see all user accounts list")
                print("4. check total available balance of the Bank")
                print("5. check total loan amount")
                print("6. turn on/off loan feature")
                print("7. Log out as admin")
                option = int(input("Choose Option: "))

                # create new account by admin

                if option == 1:
                    name = input("Name: ")
                    email = input("Email: ")
                    address = input("Address: ")
                    if not name or not email or not address:
                        print("\n--> Name, email, and address cannot be empty.")
                    else:
                        accountType = input("Account Type (Savings/Current): ").capitalize()
                        if accountType not in ["Savings", "Current"]:
                            print("\n--> Invalid account type.")
                            break
                        current_user=create_account(name, email, address, accountType)
                        print("\n--> Account created successfully.")
                
                # delete existing account 
                    
                elif option == 2:
                    account_no = (input("Enter account number to delete: "))
                    admin.delete_account(account_no)
                
                # see all accounts
                    
                elif option == 3:
                    admin.see_all_accounts()
                
                # total balance of bank
                    
                elif option == 4:
                    admin.total_balance()
                
                # total loan by user 
                    
                elif option == 5:
                    admin.total_loan_amount()
                
                # toggle loan features
                    
                elif option == 6:
                    state = input("Enter 'on' to turn loan feature ON or 'off' to turn it OFF: ").lower()
                    admin.toggle_loan_feature(state)
                
                # back
                    
                elif option== 7:
                    break
            # back
                
            else:
                print("wrong Info")
                break
        # back
            
        else :
            break
fn()

