def insertheap(arr, n, value):
    arr.append(value)  # Add to end (index n+1 in 1-based)
    n = n + 1
    i = n  # Current index (1-based)

    while i > 1:
        parent = i // 2
        if arr[parent - 1] < arr[i - 1]:  # Convert to 0-based for Python
            arr[parent - 1], arr[i - 1] = arr[i - 1], arr[parent - 1]
            i = parent
        else:
            break
    return n
