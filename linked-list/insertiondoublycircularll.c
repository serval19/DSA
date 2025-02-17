#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}
void main(){
    struct node *head,*tail;
    /*at start*/
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    if(head==0){
        head=tail=newnode;
        newnode->prev=head;
        newnode->next=head;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=tail;
        tail->next=newnode;
        head=newnode;

    }
    /* at end*/
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    if(head==0){
        head=tail=newnode;
        newnode->prev=head;
        newnode->next=head;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
    /* at a specefic pos*/
    struct node *newnode,*temp;
    temp=head;
    int pos,i=1,l;
    printf("Enter the position:");
    scanf("%d",&pos);
    /* l is the length of the list*/
    if( pos<1 || pos>1){
        printf("Invalid position");

    }
    else{
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data); 
        while(i< pos-1){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
    }

}