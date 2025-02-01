#include <stdio.h>
#include <stdlib.h>
void insertatbeginning(){
    /* assume we have already created a list*/
    stuct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    
    newnode->prev=0;
    newnode->next=head;
    head=newnode;
}
voide insertatend(){
    stuct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->end=0;  /*we can acess directly without travetrsing using the tail pointer*/
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insertatpos(){
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0){
        printf("invalid");
        
    }
    else if(pos==1){
            insertatbeginning();
        }
    
    else{
    stuct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    temp=head;
    i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;


    }
}