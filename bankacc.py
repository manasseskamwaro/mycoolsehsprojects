class BankAccount:
    def __init__(self,name,balance=0):
        self.account_holder=name
        self.balance=balance
    def deposit(self,amount):
        self.balance=self.balance + amount
        print(f"Deposited {amount} to your account.")
    def withdraw(self,amount):
        if amount>self.balance:
            print("Not enough balance!!")
        else:
            self.balance=self.balance - amount
            print("successful withdrawal")
    def __str__(self):
        return f"Account holder name:{self.account_holder}\nBalance:{self.balance}"
obj=BankAccount("Manasse",2000)
print(obj)
