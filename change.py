from cs50 import get_float
from math import floor

def main():
    while True:
        change = get_float("Change owed: ")
        cents = floor(change * 100)

        if change > 0:
            break


    quarters = cents // 25
    dimes = (cents % 25) // 10
    nickels = ((cents % 25) % 10) // 5
    pennies = ((cents % 25) % 10) % 5

    print(f"{quarters + dimes + nickels + pennies}")

if __name__ == "__main__":
    main()


