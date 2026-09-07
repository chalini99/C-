# Q2. Maximum Subarray Sum (Kadane’s Algorithm)
# Problem Statement
# Given an array of integers (positive, negative, or zero), find the maximum sum of any contiguous subarray.

# Input Format
# First line: integer 
# 𝑛
#  (size of array)

# Second line: 
# 𝑛
#  space‑separated integers

# Output Format
# Print the maximum subarray sum

# Sample Input
# Code
# 8
# -2 -3 4 -1 -2 1 5 -3
# Sample Output
# Code
# 7
# Explanation: Subarray [4, -1, -2, 1, 5] has sum = 7.

def max_subarray_sum(arr):
    best_sum = arr[0]
    curr_sum = arr[0]
    for num in arr[1:]:
        best_sum = max(best_sum, curr_sum+num)
        curr_sum = max(num,curr_sum)
    return best_sum
if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().split()))
    print(max_subarray_sum(arr))