// Online C compiler to run C program online
#include <stdio.h>
void shellsort(int a[], int n) {
    int gap;
    for (gap = n / 2; gap >= 1; gap /= 2) {
        for (int j = gap; j < n; j++) {
            for (int i = j - gap; i >= 0; i -= gap) {
                if (a[i + gap] >= a[i]) {
                    break;
                }
                else {
                    int temp = a[i + gap];
                    a[i + gap] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
}
int main() {
    // Write C code here
    int arr[5]={56,34,1,89,3};
    int n=5;
    shellsort(arr,n);
    for(int k=0;k<n;k++){
        printf("%d \n",arr[k]);
    }

    return 0;
}
