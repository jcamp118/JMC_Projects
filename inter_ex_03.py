# Manny Campbell, Natalie Tepedino, Nathan Grey, Philip Vishnevsky

# User enters a string and an empty dictionary is created.
user_input = input('Please enter a string: ')
new_dict = {}
# Starting value for each letter.
val = 1

# Converting user_input to lowercase and saving it as a new string.
lower = user_input.lower()
# Iterating over the string.
for i in range(0,len(lower)):
    # Making sure to not count spaces.
    if lower[i] != ' ':
        # If the letter at that index is not in the dictionary...
        if lower[i] not in new_dict:
            # ...add it in.
            new_dict[lower[i]] = val
        # If the letter at that index is in the dictionary...
        else:
            # ...increase the value to indicate how many times it appears in the string.
            new_dict[lower[i]] += val
print(new_dict)

# Referenced the Initial Python Docs provided to us
# https://docs.python.org/3/tutorial/datastructures.html#looping-techniques
# https://docs.python.org/3/tutorial/datastructures.html#dictionaries
# https://docs.python.org/3/library/stdtypes.html#typesmapping