"""Implement quick sort in Python.
Input a list.
Output a sorted list."""
def quicksort(array):
    if len(array)<=1:
        return array
    pivot = array[len(array)//2]
    left = [i for i in array if i<pivot]
    mid = [i for i in array if i==pivot]
    right = [i for i in array if i>pivot]
    return quicksort(left)+mid+quicksort(right)

test = [21, 4, 1, 3, 9, 20, 25, 6, 21, 14]
print (quicksort(test))