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
temp=head;
while(temp!=0){
    printf("%d ",temp->data);
    temp=temp-> next;
    
}
/* from beginning*/
temp=head;
head=tmep->next;
free(temp);
/* from end*/
temp=head;
while(temp->next!=0){
    prevnode=temp;
    temp=temp->next;

}
if(temp==head){
    head=0;
    free(temp);

}
else{
    prevnode->next=0;
    free(temp);

}
/*from a specefic position*/
struct node *nextnode;
int pos,i=1;
printf("Enter the position to remove(index starts at 1):");
scanf("%d",&pos);
temp=head;
while(i<pos-1){
    temp=temp->next;
    i++;

}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
}