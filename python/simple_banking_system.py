# total_amount=int(input("enter the total amount"))
# y=int(input("deposit(0)/withdrawl(1)"))
# if(y==1):
#     withdrawl=int(input("enter withdrawl amount"))
#     if(withdrawl<=total_amount):
#         print(f"amount after withdrwal is {total_amount-withdrawl}")
#     else:
#             print("insufficient funds")
# else:
#     deposit=int(input("enter the amount that to be deposited"))
#     print(f"amount after deposited is{total_amount+deposit}")
# exit(0)

bal=0
def display():
    global bal
    print(f"current balance is {bal}")
def check_amount():
    global bal
    print(f'Deposited amount:\u20B9{bal}')
def deposit(amount):
    amount+=bal
    print(f"total amount after depositing :{amount}")

def withdraw(amount):
    global bal
    if amount<=bal:
        print(f'withdraw amount:\u20B9{amount}')
        bal=bal-amount
        display()
    else:
        print("insufficient funds")
def open_new_account():
    print("open new account!!!")
    name=input("enter user name for new account")
    account_no=int(input("enter account no."))
    age=int(input("enter age"))
def close_account():
    account_no=int(input("enter account no."))
    print(f"close the account({account_no})")


print('Welcome to BANK')
print('======================')
print('1.Display all customers\n2.check balance\n3.deposit money\n4.withdraw money\n5.open new account\n6.close account\n7.exit')
print('======================')

while True:  
   choice=input('please select an option[1-7]:')
   if choice=='1':
       display()
   elif choice=='2':
       check_amount()

   elif choice=='3':
       amount=int(input("enter amount you want to deposit:"))
       deposit(amount)

   elif choice=='4':
        withdraw_amount=int(input("enter the amount that to be withdraw"))
        withdraw(withdraw_amount)
   elif choice=='5':
       open_new_account()
   elif choice=='6':
       close_account()
   else:
       exit(0)
       
    
