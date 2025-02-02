#include <stdio.h>
#include <stdlib.h>
void main(){
    /* from beginning*/
struct node *temp;
if(head==0){
    printf("the list is empty");
    
}
else{
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
}
/* from end*/
struct node *temp;
if(tail==0){
    printf("the list is empty");
    
}
else{
    temp=tail;
    tail->prev->next=0;
    tail=tail->prev;
    free(temp);
    }
    /*from a specefic index assuming list starts at index 1*/
int pos,i=1;
struct node *temp;
temp=head;
printf("enter the position:");
scanf("%d",&pos);
while(i<pos){
    temp=temp->next;
    i++;

}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}