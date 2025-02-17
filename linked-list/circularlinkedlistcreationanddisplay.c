#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}
void main(){
    int choice=1;
    int data;
    struct node *head,*newnode,*temp;
    head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(stuct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=newnode;
            temp->next=head;
        }
        /* displaying the contents*/
        if(head==0){
            printf("The list is empty")
        }
        else{
            temp=head;
            while(temp->next!=head){
                printf("%d",&temp->data);
                temp=temp->next;
            }
            printf("%d",temp->next);
        }
    }
}
/* create seperate functions for creation and display*/