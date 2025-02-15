// using iterative approach
#include <stdio.h>

int main() {
    // Write C code here
    //assuming we already have a linked list
    struct node{
        int data;
        struct node *next;
    }
struct node *prevnode,*currentnode,*nextnode;
prevnode=0;
nextnode=currentnode=head;
while(nextnode!=0){
    nextnode=nextnode->next;
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode; //instead of temp we use current node 
    // without 3 pointers we cannot do this approach
    
}
head=prevnode;
    return 0;
}
