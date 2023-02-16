from cs50 import get_float

#Ask how many cents the customer is owed
while True:
    cents= get_float("change:")
    if cents > 0:
        break
cents = round(cents * 100)

count = 0

#calculate quarter
while cents >=25:
    cents= cents - 25
    count += 1

#calculate dimes
while cents >=10:
    cents= cents - 10
    count += 1

#calculate nickels
while cents >=5:
    cents= cents - 5
    count += 1

#calculate pennys
while cents >=1:
    cents= cents - 1
    count += 1

#print the amount of coins
print(f"you have {count} coins")

