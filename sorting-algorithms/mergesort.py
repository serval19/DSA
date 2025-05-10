def merge(a, lb, mid, ub):
    b = []
    i = lb
    j = mid + 1
    
    while i <= mid and j <= ub:
        if a[i] <= a[j]:  # For ascending order
            b.append(a[i])
            i += 1
        else:
            b.append(a[j])
            j += 1
    
    # Add remaining elements from left subarray
    while i <= mid:
        b.append(a[i])
        i += 1
    
    # Add remaining elements from right subarray
    while j <= ub:
        b.append(a[j])
        j += 1
    
    # Copy merged elements back to original array
    for k in range(len(b)):
        a[lb + k] = b[k]

def mergesort(a, lb, ub):
    if lb < ub:
        mid = (lb + ub) // 2
        mergesort(a, lb, mid)
        mergesort(a, mid + 1, ub)
        merge(a, lb, mid, ub)

# Test the function
arr = [1, 2, 3, 4, 32, 789, 34, 23,22,1000,123]
mergesort(arr, 0, len(arr) - 1)
print(arr)

