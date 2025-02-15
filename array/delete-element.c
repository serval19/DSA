#include <stdio.h>
void main(){
    int a[50],size,data,index,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the index to delete element:");
    scanf("%d",&index);
    if(index<=0 || index>size+1){
        printf("invalid please try again !");

    }
    else{
        for(i=index;i<=size-1;i++){
            a[i]=a[i+1];

        }
        
        size=size-1;
    }
    for(i=0;i<size;i++){
        printf("%d",a[i]);
        printf("\n");
    }

}
