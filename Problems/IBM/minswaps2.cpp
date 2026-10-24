Understand the approach

Initialize swaps = 0.



Traverse the array using index i from 0 to n-1.



The correct position of a value x is index x - 1.



If arr[i] == i + 1, the element is already in the correct position. Move to the next index.



Otherwise:
- Calculate correctIndex = arr[i] - 1.
- Swap arr[i] with arr[correctIndex].
- Increment swaps.
- Stay at the same index i and check again, because the new element might also be in the wrong position.



Return swaps.