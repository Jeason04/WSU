class Pet:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return f"Name: {self.name}, Age: {self.age}"

    def human_age(self):
        return self.age * 4


class Dog(Pet):
    def bark(self, n):
        for _ in range(n):
            print("bark!")


class Cat(Pet):
    def meow(self, n):
        for _ in range(n):
            print("meow~")


if __name__ == '__main__':
    n1 = input("강아지의 이름을 입력하세요: ")
    age1 = int(input("강아지의 나이를 입력하세요: "))

    n2 = input("고양이의 이름을 입력하세요: ")
    age2 = int(input("고양이의 나이를 입력하세요: "))

    pet1 = Dog(n1, age1)
    pet2 = Cat(n2, age2)

    pet1.bark(3)
    print(pet1)
    print(f"사람 나이로 환산: {pet1.human_age()}")

    pet2.meow(4)
    print(pet2)
    print(f"사람 나이로 환산: {pet2.human_age()}")
