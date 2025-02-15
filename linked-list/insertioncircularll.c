#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;

}
void main(){
    struct node *newnode;
    /*at beginning*/
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0){
        tail=newnode;
        newnode->next=tail;

    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;

    }
    /* insertion at end*/
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(tail==0){
        tail=newnode;
        newnode->next=tail;

    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;

    }
    /* at a specefic position*/
    int pos,l,i=1;
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0 || pos>l){
        printf("Invalid position");
    }
    else{
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=tail->next;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }

}