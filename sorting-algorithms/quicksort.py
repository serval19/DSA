def partition(arr,lb,ub):
    pivot=arr[lb]
    start=lb
    end=ub
    while start<=end:
        while start<=end and arr[start]<=pivot:
            start+=1
        while start<=end and arr[end]>pivot:
            end-=1
        if start<end:
            arr[start],arr[end]=arr[end],arr[start]
    arr[lb],arr[end]=arr[end],arr[lb]
    return end
def quicksort(arr,lb,ub):
    if lb<ub:
        loc=partition(arr,lb,ub)
        quicksort(arr,lb,loc-1)
        quicksort(arr,loc+1,ub)
    return arr
print(quicksort([1,3,4,2,67,45,32,51,578,22],0,9))
