#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node{
        int data;
        struct node *next;
        struct node *prev;
    }
struct node *current,*prev;
struct node *head,*tail;
current=head;
while(current!=-){
    next=current->next;
    current->next=current->prev;
    current->prev=next;
    current=next;
}
current=head;
head=tail;
tail=current;
}