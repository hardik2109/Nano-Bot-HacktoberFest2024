def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2  # Find the middle element

        if arr[mid] == target:
            return mid  # Target found, return its index
        elif arr[mid] < target:
            left = mid + 1  # Ignore the left half
        else:
            right = mid - 1  # Ignore the right half

    return -1  # Target not found

# Example Usage
arr = [2, 3, 5, 7, 11, 13, 17, 19, 23]
target = 13

result = binary_search(arr, target)
if result != -1:
    print(f"Element {target} found at index {result}.")
else:
    print(f"Element {target} not found.")
