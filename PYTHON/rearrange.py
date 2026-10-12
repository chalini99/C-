# 1. Rearrange Array (Odds first, Evens later, both sorted)
# Problem Statement
# You are given an array of integers. Rearrange it so that:

# All odd numbers come first (sorted ascending).

# All even numbers come later (sorted ascending).

# Input Format
# First line: integer 
# 𝑛
#  (size of array)

# Second line: 
# 𝑛
#  space‑separated integers

# Output Format
# Print the rearranged array in a single line

# Sample Input
# Code
# 7
# 4 1 3 2 7 6 5
# Sample Output
# Code
# 1 3 5 7 2 4 6


def rearrange_array(arr):
    # Separate odd and even numbers
    odd_numbers = [num for num in arr if num % 2 != 0]
    even_numbers = [num for num in arr if num % 2 == 0]

    # Sort both lists
    odd_numbers.sort()
    even_numbers.sort()

    # Combine the sorted odd and even numbers
    rearranged_array = odd_numbers + even_numbers

    return rearranged_array