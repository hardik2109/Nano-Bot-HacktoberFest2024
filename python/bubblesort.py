def bubble_sort(arr):
    n = len(arr)

    # Traverse through all elements in the array
    for i in range(n - 1):
        swapped = False  # To check if any swaps happen in this pass

        # Last i elements are already sorted, so ignore them
        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                # Swap if the element is greater than the next element
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        # If no elements were swapped, the array is already sorted
        if not swapped:
            break

# Example Usage
arr = [64, 34, 25, 12, 22, 11, 90]
print("Original array:", arr)

bubble_sort(arr)

print("Sorted array:", arr)
