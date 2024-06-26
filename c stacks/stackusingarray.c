#include<stdio.h>
#include<stdbool.h>
typedef struct{
    int top;
    int cap;
    int arr[50];

}stack;
void init_stack(stack *s){
    s->top=-1;
    s->cap=50;
}
void push(stack *s,int data){
    if (s->top==s->cap-1){
        printf("\n stack overflow");
        return;}
        s->top++;
        s->top=s->arr[s->top]=data;
    
}
void pop(stack *s){
    if (s->top==-1){
    printf("\n stack underflow");
    return;}
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
    for(int i=0;i<5;i++){
        push(&s,i+1);
    }
    while(!empty(&s)){
        printf("%d",top(&s));
        pop(&s);
    }
    printf("\n");
    return 0;
}



// #include<stdio.h>
// #include<stdbool.h>
// typedef struct stack{
//     int arr[50];
//     int top;
//     int cap;
// }stack;
// void init_stack(stack *s){
//     s->top=-1;
//     s->cap=50;
// }
// void push(stack *s,int data){
//     if(s->top==s->cap-1){
//         printf("\n stack overflow");
//         return;
//     }
//     s->top=s->top+1;
//     s->arr[s->top]=data;
// }
// void pop(stack *s){
//     if (s->top==-1){
//         printf("\n stack underflow");
//         return;
//     }
//     s->top=s->top-1;
// }
// int top(stack *s){
//     if(s->top==-1) return -1;
//     s->arr[s->top];
// }
// int size(stack*s){
//     return s->top+1;
// }
// bool empty(stack *s){
//     return s->top==-1;
// }
// int main(){
//     stack s;
//     init_stack(&s);
//     for(int i=0;i<=5;i++){
//         push(&s,i+1);
//     }
//     while(!empty(&s)){
//         printf("%d",top(&s));
//         pop(&s);
//     }
//     printf("\n");
//     return 0;
// }