
A = [91,68,12,83,72,3,47,65]

# Traverse through all array elements
for i in range(len(A)-1):
    
    min_idx = i
    for j in range(i+1, len(A)):
        if A[min_idx] > A[j]:
            min_idx = j       
    A[i], A[min_idx] = A[min_idx], A[i]
    print(A)

# Driver code to test above
print ("Sorted array")
for i in range(len(A)):
    print(A[i],end=" ") 
