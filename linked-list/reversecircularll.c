#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}
void main(){
    struct node *current,*prev,*nextnode;
    current=tail->next;
    nextnode=current->next;
    if(tail==0){
        printf("The list is empty")
    }
    else{
        while(current!=tail){
            prev=current;
            current=nextnode;
            nextnode=current->next;
            current->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
    }
}