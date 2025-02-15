#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void main(){
    struct node *head,*tail;
    struct node *newnode;
    head=0;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        if(head==0){
            head=tail=newnode;
            newnode->next=head;
            newnode->prev=head;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
            printf("Do you want to continue(0,1):");
            scanf("%d",&choice);
        }
    }
    /*display*/
    struct node *temp;
    temp=head;
    while(temp!=tail){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);

}
/* end*/


