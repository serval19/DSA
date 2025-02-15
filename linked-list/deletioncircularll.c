#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;

}
void main(){
    /* from the beginning*/
    struct node *temp;
    temp=tail->next;
    if(tail==0){
        printf("the list is empty")
    }
    else if(temp->next==tail){
        tail=0;
        free(temp);
    }
    else{
        tail->next=temp->next;
        free(temp);
    }
    /* from end*/
    struct node *current,*prev;
    current=tail->next;
    while(current->next!=tail->next){
        prev=current;
        current=current->next;
    }
    prev->next=tail->next;
    tail=prev;
    free(current);
    /* from a position*/
    struct node *current,*next;
    int pos,i=1;
    printf("Enter the position:");
    scanf("%d",&pos);
    while(i<pos-1){
        current=current->next;
        i++;

    }
    next=current->next;
    current->next=next->next;
    free(next);
}