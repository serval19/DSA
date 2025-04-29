def binarysearch(arr,n,data):
    l=0
    r=n-1
    while l<=r:  #  = to handle if data comes at end of the array
        mid=(l+r)//2
        if data==arr[mid]:
            return mid
        elif data>arr[mid]:
            l=mid+1
        else:
            r=mid-1
    return -1
print(binarysearch([1,2,3,4],4,4))
