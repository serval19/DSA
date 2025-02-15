def bubblesort(arr):

    for i in range(len(arr)-1): #first element automatically get sorted when 2 to last elements are sorted
        modified=False
        for j in range(len(arr)-i-1): #to avoid list index out of range and check the sorted elements again
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                modified=True
        if modified==False:
            break
array=eval(input("Enter the array:"))
bubblesort(array)
print(array)
# rewrite in c later