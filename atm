# Node class to represent a transaction in the linked list
class Node:
    def __init__(self, amount, transaction_type):
        self.amount = amount
        self.transaction_type = transaction_type
        self.next = None

# Linked List to store transaction history for each account
class TransactionHistory:
    def __init__(self):
        self.head = None

    # Add a new transaction at the beginning (like a push operation)
    def add_transaction(self, amount, transaction_type):
        new_node = Node(amount, transaction_type)
        new_node.next = self.head
        self.head = new_node

    # Display the transaction history
    def show_history(self):
        if not self.head:
            print("No transactions found.")
            return
        print("Transaction History:")
        current = self.head
        while current:
            print(f"{current.transaction_type}: ₹{current.amount}")
            current = current.next

# Account class with linked list-based transaction history
class Account:
    def __init__(self, name, balance=0):
        self.name = name
        self.balance = balance
        self.history = TransactionHistory()

    # Deposit money into the account
    def deposit(self, amount):
        self.balance += amount
        self.history.add_transaction(amount, "Deposit")
        print(f"Deposited ₹{amount}. New Balance: ₹{self.balance}")

    # Withdraw money from the account (if sufficient balance)
    def withdraw(self, amount):
        if amount > self.balance:
            print(f"Insufficient balance! Current Balance: ₹{self.balance}")
        else:
            self.balance -= amount
            self.history.add_transaction(amount, "Withdrawal")
            print(f"Withdrew ₹{amount}. New Balance: ₹{self.balance}")

    # Show current balance
    def show_balance(self):
        print(f"Current Balance: ₹{self.balance}")

    # Display transaction history
    def show_transaction_history(self):
        self.history.show_history()

# ATM class to manage operations on multiple accounts
class ATM:
    def __init__(self):
        self.accounts = {}

    # Create a new account
    def create_account(self, name, initial_deposit=0):
        if name in self.accounts:
            print(f"Account with the name '{name}' already exists.")
        else:
            account = Account(name, initial_deposit)
            self.accounts[name] = account
            print(f"Account created for {name} with an initial deposit of ₹{initial_deposit}.")

    # Access an existing account
    def get_account(self, name):
        if name not in self.accounts:
            print(f"No account found with the name '{name}'.")
            return None
        return self.accounts[name]

# Example Usage
atm = ATM()
atm.create_account("Alice", 5000)

# Perform operations on Alice's account
alice_account = atm.get_account("Alice")
if alice_account:
    alice_account.deposit(2000)
    alice_account.withdraw(1500)
    alice_account.show_balance()
    alice_account.show_transaction_history()
