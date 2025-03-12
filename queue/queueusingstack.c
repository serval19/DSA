#include <stdio.h>
#define N 5
int s1[N];
int s2[N];
int top1=-1;
int top2=-1;
int count=0;
void dequeue(){
    int i;
    if(top1==-1 && top2==-1){
        //empty
    }
    else{
        int a,b;
        for(i=0;i<count;i++){
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("%d",b);
        count--;
        for(i=0;i<count;i++){
            a=pop2();
            push1(a);
        }
    }
}
void enqueue(int x){
    push1(x);
    count++;
}
void push1(int data){
    if(top1==N-1){
        //overflow
    }
    else{
        top1++;
        s1[top1]=data;
    }
}
int pop1(){
    return s1[top1--];

}
int pop2(){
    return s2[top2--];
}
void push2(int data){
    if(top2==N-1){
        //overflow
    }
    else{
        top2++;
        s2[top2]=data;
    }
}
void display(){
    for(int i=0;i<=top1;i++){
        printf("%d",s1[i]);
    }
}

