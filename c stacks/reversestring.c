#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define stack_size 100
typedef struct stack{
    char arr[stack_size];
    int top;
    int cap;
}stack;
void init_stack(stack *s){
    s->top=-1;
    s->cap=stack_size;
}
void push(stack *s,char data){
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
int main(){
    stack s;
    init_stack(&s);
    char str[stack_size];
    printf("enter the string \n");
    gets(str);
    for (int i=0;i<strlen(str);i++){
        push(&s,str[i]);
    }
    while(!empty(&s)){
        printf("%c", top(&s));
        pop(&s);
    }
    
    printf("\n");
}