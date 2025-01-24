#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node{
        int data;
        struct node *next;
    };

struct node *head,*newnode,*temp;
int choice=1;
head=0;
while(choice){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf(" Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    
if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
printf(" Do you want to continue (0,1)?");
scanf("%d",&choice);
/* printing elements of the linked list */



}
int pos=1;
printf("Enter the position of the node after which you want to insert new node:");
scanf("%d",&pos);
if(pos>3){  /*count is len of the linked list*/
printf("invalid");

}
else{
    int i=1;
    temp=head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
}
