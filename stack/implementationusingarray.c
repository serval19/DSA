#define N 5;
int stack[N];
int top=-1;
void push(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(top==N-1){
        printf("The stack is full\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("underflow");

    }
    else{
        item=stack[top];
        top--;
        printf("The popped element is %d\n",item);
    }
}
void peek(){
    if(top==-1){
        printf("Empty stack\n");
    }
    else{
        printf("The top element is %d\n",stack[top]);
    }
}
void display(){
    int i;
    for(i=top;i<=0;i--){
        printf("%d\n",stack[i]);
    }
}