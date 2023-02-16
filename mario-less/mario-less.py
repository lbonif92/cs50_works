from cs50 import get_int

def main():
    height = get_height()
    for i in range(height):
        for j in range(height):
            if(i+j < height -1):
                print(".", end="")
            else:
                print("#", end="")
        print()

def get_height():
    while True:
        n = get_int("Height: ")
        if n > 0:
            break
    return n

main()