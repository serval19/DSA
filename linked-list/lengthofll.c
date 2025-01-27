#include <stdio.h>

int main() {
    // Write C code here
    struct node{
        int data;
        struct node *next;
    }
/*assuming a ll is already there */
int count=0;
struct node *temp;
while(temp!=0){
    count++;
    temp=temp->next;
}
printf("The length of the linked list is: %d",&count);

    return 0;
}
