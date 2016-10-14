#Moe Murtadi
#Learning Python
#Lottery App Completed Reading week Fall 2016)

import random

def menu():
    # Ask player for numbers

    user_numbers = get_player_numbers()

    # Calculate lottery numbers

    lottery_numbers = create_lottery_numbers()
    
    # Print out the winnings

    matched_numbers = user_numbers.intersection(lottery_numbers)
    print("You matched {}. You Won${}!".format(matched_numbers, 100 ** len(matched_numbers)))

    
    
# user picks 6 numbers

def get_player_numbers():
    number_csv = input("Enter your 6 lottery numbers, sperated by commas: ")
    number_list = number_csv.split(",")
    integer_set = {int(number) for number in number_list}
    return integer_set

# Generate 6 random and unique numbers between 1 and 20

def create_lottery_numbers():
    values = set()
    while len(values) < 6:
        values.add(random.randint(1,20))
    return values
        
Run the program.
menu()
