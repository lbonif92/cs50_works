import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        if not row["Numero 1"] in titles:
            %
        print(row["Numero 1"])