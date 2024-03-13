# Manny Campbell, Natalie Tepedino, Nathan Grey, Philip Vishnevsky

# Input to determine the size of the list.
list_size = int(input('Please determine the size of your list: '))
# Empty list to append the values input by the user.
initial_list = []

# For loop to iterate over every value in the initial list.
for i in range(0,list_size):
    # Appending every value to the initial list.
    user_input = int(input('Please enter an integer: '))
    initial_list.append(user_input)
print('Initial List: ' + str(initial_list))

# Creating new function to be called.
def get_non_repeat_list(initial_list):
    # Empty list to append all unique values.
    non_repeat_list = []
    # Iterating through the initial list using set to eliminate duplicates.
    # Used sorted to return the list in sorted order.
    for val in sorted(set(initial_list)):
        # Appending all unique values to the non repeating list.
        non_repeat_list.append(val)
    return non_repeat_list

# Code to call the function.
non_repeat_list = get_non_repeat_list(initial_list)
print('Non-repeating List: ' + str(non_repeat_list))

# Referenced the Official Python Docs provided to us
# https://docs.python.org/3/tutorial/datastructures.html#looping-techniques
