#include <stdio.h>
#include <conio.h>
void main(){
    struct node {
        int data;
        struct node *next;
        struct node *prev;
    }
struct node *temp;
struct node *head,*newnode;
int choice=1;
head=0;
while(choice){
    newnode=(struct node *)malloc(sizeof(stuct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;

    }
    printf("Do you want to contiue(0,1) ? ");
    scanf("%d",&choice);

}
/* we print the element of the doubly linked list in the same way as that of the singly linked list*/
}
