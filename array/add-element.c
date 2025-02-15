#include <stdio.h>
void main(){
    int a[50],size,data,index,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the data that you want to insert:");
    scanf("%d",&data);
    printf("Enter the index:");
    scanf("%d",&index);
    if(index<=0 || index>size+1){
        printf("invalid please try again !");

    }
    else{
        for(i=size-1;i>=index;i--){
            a[i+1]=a[i];

        }
        a[index]=data;
        size=size+1;
    }
    for(i=0;i<size;i++){
        printf("%d",a[i]);
        printf("\n");
    }

}
