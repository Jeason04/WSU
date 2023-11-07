str = "This is a more advanced comprehension exercise to practice"
a = str.split()
result = [i[::-1] for i in a if len(i) >= 5]
print(result)
