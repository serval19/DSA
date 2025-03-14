#include <stdio.h>
#define N 5
int deque[N];
int f=-1,r=-1;
void enqueuefront(int x){
    if((r+1)%N==f){
        //overflow
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[f]=x;
    }
    else if(f==0){
        f=N-1;
        deque[f]=x;
    }
    else{
        f--;
        deque[f]=x;
    }
}
void enquerear(int x){
    if((r+1)%N==f){
        //overflow
    }
    else if(f==-1 && r==-1){
        f=r=0;
        deque[f]=x;
    }
    else if(r==N-1){
        r=0;
        deque[r]=x;
    }
    else{
        r++;
        deque[r]=x; 
    }
    
}
void display(){
    int i=f;
    while(i!=rear){
        printf("%d",deque[i]);
        i=(i+1)%N;

    }
    printf("%d",deque[r]);
}
void dequefront(){
    if(f==-1 && r==-1){
        //empty
    }
    else if(f==r){
        f=r=-1;
    }
    else if(f==N-1){
        f=0;
    }
    else{
        f++;
    }
}
void dequerear(){
    if(f==-1 && r==-1){
        //empty
    }
    else if(f==r){
        f=r=-1;
    }
    else if(r==0){
        r=N-1;
    }
    else{
        r--;
    }
}   