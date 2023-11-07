burgers = []
drinks = []

for _ in range(3):
    burgers.append(int(input()))

for _ in range(2):
    drinks.append(int(input()))

result = [i+j - 50 for i in burgers for j in drinks]
min_price = min(result)
print("\n")
print(min_price)
