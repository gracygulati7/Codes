#include<stdio.h>
#include<stdbool.h>
typedef struct stack{
    int arr[50];
    int cap;
    int top;
}stack;
void init_stack(stack *s){
    s->top=-1;
    s->cap=50;
}
void push(stack *s,int data){
    if(s->top==s->cap-1){
        printf("\n stack overflow");
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}
void pop(stack *s){
    if(s->top==-1){
        printf("\n stack underflow");
        return;
    }
    s->top--;
}
int top(stack *s){
    if(s->top==-1) return -1;
    return s->arr[s->top];
}
int size(stack *s){
    return s->top+1;
}
bool empty(stack *s){
    return s->top==-1;
}
void arr_rev(int arr[],int n){
    stack s;
    init_stack(&s);
    for(int i=0;i<n;i++){
        push(&s,arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=top(&s);
        pop(&s);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    arr_rev(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}