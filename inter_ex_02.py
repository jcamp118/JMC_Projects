# Manny Campbell, Natalie Tepedino, Nathan Grey, Philip Vishnevsky

# Determine the size of dictionary 1 and create an empty dictionary.
dict1_size = int(input('Please determine the size of your first dictionary: '))
dict_1 = {}
# Iterate over dictionary 1 to add the key(string):val(integer) at each index.
for i in range(0,dict1_size):
    key = input('Please enter a string: ')
    val = int(input('Please enter an integer: '))
    dict_1[key] = val

# Determine the size of dictionary 2 and create an empty dictionary.
dict2_size = int(input('Please determine the size of your second dictionary: '))
dict_2 = {}
# Iterate over dictionary 2 to add the key(string):val(integer) at each index.
for i in range(0,dict2_size):
    key = input('Please enter a string: ')
    val = int(input('Please enter an integer: '))
    dict_2[key] = val

#Function to combine the two dictionaries.
def get_comb_dict(dict_1,dict_2):
    # Create an empty dictionary.
    comb_dict={}
    # Iterate over dict_1 using the items() method to obtain the key and value at each index.
    for key, val in dict_1.items():
        # Iterate over dict_2 using the items() method to obtain the key and value at each index.
        for key2, val2 in dict_2.items():
            # If a key in dict_1 matches a key in dict_2, add that key to comb_dict
            if key2 == key:
                # The combined values of that key in dict_1 and dict_2 become it's value in comb_dict.
                comb_dict[key2] = val + val2
    return comb_dict

# Testing the function.
comb_dict = get_comb_dict(dict_1,dict_2)
print(comb_dict)

# Referenced the Official Python Docs provided to us
# https://docs.python.org/3/tutorial/datastructures.html#looping-techniques
# https://docs.python.org/3/tutorial/datastructures.html#dictionaries
# https://docs.python.org/3/library/stdtypes.html#typesmapping