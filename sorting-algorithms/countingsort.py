def countingsort(a,n,k):
    count=[0]*(k+1)
    b=[0]*n
    for i in range(0,n,1):
        count[a[i]]+=1
    for i in range(1,k+1,1):
        count[i]=count[i]+count[i-1]
    for i in range(n-1,-1,-1):
        count[a[i]]-=1
        b[count[a[i]]]=a[i]
    return b
print(countingsort([0,0,0,1,1,1,3,1,1,3,2,2],12,3))
        
