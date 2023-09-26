from abc import ABC, abstractmethod


class Item(ABC):
    count = 0

    def __init__(self, title, price):
        self.title = title
        self.price = price
        Item.count += 1

    @abstractmethod
    def getprice(self):
        pass

    def __str__(self):
        return f"Title: {self.title}, Price: {self.price}원"


class Book(Item):
    def __init__(self, title, price, pages, author):
        super().__init__(title, price)
        self.pages = pages
        self.author = author

    def getprice(self):
        return f"Book - {self.title}: {self.price}원"

    def __str__(self):
        return super().__str__() + f", Pages: {self.pages}, Author: {self.author}"


class Magazine(Item):
    def __init__(self, title, price, issue_date):
        super().__init__(title, price)
        self.issue_date = issue_date

    def getprice(self):
        return f"Magazine - {self.title}: {self.price}원"

    def __str__(self):
        return super().__str__() + f", Issue Date: {self.issue_date}"


if __name__ == '__main__':
    title_book = input("제목을 입력하세요: ")
    price_book = int(input("가격을 입력하세요: "))
    pages_book = int(input("페이지 수를 입력하세요: "))
    author_book = input("저자를 입력하세요: ")

    book1 = Book(title_book, price_book, pages_book, author_book)

    title_book = input("제목을 입력하세요: ")
    price_book = int(input("가격을 입력하세요: "))
    pages_book = int(input("페이지 수를 입력하세요: "))
    author_book = input("저자를 입력하세요: ")
    book2 = Book(title_book, price_book, pages_book, author_book)

    title_book = input("제목을 입력하세요: ")
    price_book = int(input("가격을 입력하세요: "))
    pages_book = int(input("페이지 수를 입력하세요: "))
    author_book = input("저자를 입력하세요: ")
    book3 = Book(title_book, price_book, pages_book, author_book)

    magazine1 = Magazine('보그', 11000, '2023-09-01')
    magazine2 = Magazine('싱글즈', 13000, '2023-08-01')

    print(book1)
    print(book2)
    print(book3)
    print(magazine1)
    print(magazine2)

    print(f'총 {Item.count}권')

    book2.getprice()
    magazine1.getprice()
    book1.getprice()
