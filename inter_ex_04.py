# Manny Campbell, Natalie Tepedino, Nathan Grey, Philip Vishnevsky

# Sum of all the input values.
sum = 0

# Collect user input 5 times.
for i in range(1,6):
    # While still in this range
    while True:
        # Collect user input, make sure it's an integer and add it to the sum.
        try:
            user_input = input('Enter integer #' + str(i) + ': ')
            val = int(user_input)
            sum = sum + val
            break
        # If the input is not an integer,
        # print an error message and have the user try that input # again.
        except ValueError:
                print('ERROR - invalid entry. Enter an integer value.')
print('Your sum is: ' + str(sum))

# Referenced code from Intro to Python Exercise #7
# Referenced the Initial Python Docs provided to us
# https://docs.python.org/3/tutorial/datastructures.html#looping-techniques
# https://docs.python.org/3/tutorial/errors.html#syntax-errors