#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node *temp;
    /* from start*/
    temp=head;
    if(head==0){
        printf("list is empty");

    }
    else if(head->next==head){
        head=tail=0;
        free(temp);
    }
    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
    /* from end*/
    temp=tail;
    if(head==0){
        printf("list is empty");

    }
    else if(head->next==head){
        head=tail=0;
        free(temp);
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
    /* from a position*/
    int pos,i=1,lenoflist;
    temp=head;
    printf("enter the position to delete");
    scanf("%d",&pos);
    if(pos<1 || pos>lenoflist){
        printf("invalid position");

    }
    else{
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
}