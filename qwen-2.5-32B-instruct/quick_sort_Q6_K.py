# Quick-sort implementation in python (4 spaces indentation + detailed comments) and sample usage

# Author: Daniel Luna
# Date: 18-12-2021
# Place: Queretaro, Mexico

# This function is the main one. It takes a list as input and returns the sorted list using quick-sort algorithm.
def quick_sort(list):
    # If the list has 1 or 0 elements, it is already sorted, so we return it
    if len(list) <= 1:
        return list
    # We choose the pivot as the last element of the list
    pivot = list.pop()
    # We create two empty lists, one for the elements less than the pivot and another for the elements greater than the pivot
    less = []
    greater = []
    # We iterate over the list and append the elements to the corresponding list
    for element in list:
        if element < pivot:
            less.append(element)
        else:
            greater.append(element)
    # We return the concatenation of the sorted less list, the pivot and the sorted greater list
    return quick_sort(less) + [pivot] + quick_sort(greater)

# Sample usage
if __name__ == '__main__':
    # We create a list with some elements
    list = [1, 5, 3, 8, 2, 6, 4, 7]
    # We print the list
    print(list)
    # We sort the list and print it
    print(quick_sort(list)) # Output: [1, 2, 3, 4, 5, 6, 7, 8]

# The time complexity of this algorithm is O(n log n) in the average case and O(n^2) in the worst case.
# The space complexity is O(n) because we create two new lists for the elements less than and greater than the pivot.
# The worst case occurs when the pivot is the smallest or the
