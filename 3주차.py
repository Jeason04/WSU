class Customer:
    def __init__(self, name, balance=0):
        self.name = name
        self.balance = balance

    def __str__(self):
        return f"{self.name}({self.balance}원)"

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
        return self.balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance


if __name__ == '__main__':
    n1 = input("첫 번째 고객의 이름을 입력하세요: ")
    balance1 = int(input("첫 번째 고객의 잔고를 입력하세요 (입력 없는 경우 0으로 설정됨): "))

    n2 = input("두 번째 고객의 이름을 입력하세요: ")
    balance2 = int(input("두 번째 고객의 잔고를 입력하세요 (입력 없는 경우 0으로 설정됨): "))

    n3 = input("세 번째 고객의 이름을 입력하세요: ")
    balance3 = int(input("세 번째 고객의 잔고를 입력하세요 (입력 없는 경우 0으로 설정됨): "))

    c1 = Customer(n1, balance1)
    c2 = Customer(n2, balance2)
    c3 = Customer(n3, balance3)

    print(c1, c2, c3)

    c1.deposit(50000)
    c2.deposit(30000)
    c3.withdraw(100000)
    print(c1, c2, c3)

    c2.withdraw(1000000)
    print(c1, c2, c3)
