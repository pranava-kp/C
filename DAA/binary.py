# Python3 code to implement iterative Binary
# Search.


# It returns location of x in given array arr
def binarySearch(arr, low, high, x):
    count=0
    while low <= high:

        mid = low + (high - low) // 2
        count=count+1
        # Check if x is present at mid
        if arr[mid] == x:
            print("Count is",count)
            return mid

        # If x is greater, ignore left half
        elif arr[mid] < x:
            low = mid + 1

        # If x is smaller, ignore right half
        else:
            high = mid - 1
        

    # If we reach here, then the element
    # was not present
    
    return -1


# Driver Code
if __name__ == '__main__':
    arr = [45,56,79,81,82,94,108]
    x = 79

    # Function call
    result = binarySearch(arr, 0, len(arr)-1, x)
    if result != -1:
        print("Element is present at index", result)
    else:
        print("Element is not present in array")
