#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    /* push*/
    struct node *top=0;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;/* x is received from user*/
    newnode->next=top;
    top=newnode;
    /*display*/
    struct node *temp;
    temp=top;
    if(top==0){
        /*empty*/
    }
    else{
        while(temp!=0){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    /*peek*/
    if(top==0){
        /*empty*/
    }
    else{
        printf("%d",top->data);
    }
    /*pop*/
    struct node *temp1;
    temp1=top;
    if(top==0){
        /*empty*/
    }
    else{
        printf("%d",top->data);
        top=top->next;
        free(temp1);
    }
}