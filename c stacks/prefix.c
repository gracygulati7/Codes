// #include<stdio.h>
// #include<stdbool.h>
// #include<string.h>
// #include<math.h>
// #define stack_size 100
// typedef struct stack{
//     char arr[stack_size];
//     int top;
//     int cap;
// }stack;
// void init_stack(stack *s){
//     s->top=-1;
//     s->cap=stack_size;
// }
// void push(stack *s, char data){
//     if(s->top>=s->cap-1){
//         printf("\n stack overflow");
//         return;
//     }
//     s->top++;
//     s->arr[s->top]=data;
// }
// void pop(stack *s){
//     if(s->top<=-1){
//         printf("\n stack underflow");
//         return;
//     }
//     s->top--;
// }
// char top(stack *s){
//     if(s->top<=-1) return -1;
//     return s->arr[s->top];
// }
// int size(stack *s){
//     return s->top+1;
// }
// bool empty(stack *s){
//     return s->top==-1;
// }
// bool is_alpnum(char ch){
//     if (ch>='0' && ch<='9') return true;
//     if (ch>='a' && ch<='z') return true;
//     if (ch>='A' && ch<='Z') return true;
//     return false;
// }
// int pre(char arr[]){
//     stack s;
//     init_stack(&s);
//     int n1,n2;
//     for(int i=strlen(arr)-1;i>=0;i--){
//         if(arr[i]>='0' && arr[i]<='9'){
//             push(&s,arr[i]-'0');
//             continue;
//         }
//         if(arr[i] == ' ' && arr[i]== '\t') continue;
//         int n1=top(&s); pop(&s);
//         int n2=top(&s); pop(&s);
//         switch(arr[i]){
//             case '+':
//                      push(&s,n1+n2);
//                      break;
//             case '-':
//                      push(&s,n1-n2);
//                      break;
//             case '*':
//                      push(&s,n1*n2);
//                      break;
//             case '/':
//                      push(&s,n1/n2);
//                      break;
//             case '^':
//                      push(&s,pow(n1,n2));
//                      break;
//         }
//     }
//     return(top(&s));
// }
// int main(){
//     char arr[]="+2/*34-53";
//     printf("%d",pre(arr));
//     return 0;
// }


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
void push(stack *s, char data){
    if(s->top>=s->cap-1){
        printf("\n stack overflow");
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}
void pop(stack *s){
    if(s->top<=-1){
        printf("\n stack underflow");
        return;
    }
    s->top--;
}
char top(stack *s){
    if(s->top<=-1) return -1;
    return s->arr[s->top];
}
int size(stack *s){
    return s->top+1;
}
bool empty(stack *s){
    return s->top==-1;
}
bool is_alpnum(char ch){
    if (ch>='0' && ch<='9') return true;
    if (ch>='a' && ch<='z') return true;
    if (ch>='A' && ch<='Z') return true;
    return false;
}
int pre(char arr[]){
    stack s;
    init_stack(&s);
    int n1,n2;
    for(int i=strlen(arr)-1;i>=0;i--){
        if(arr[i]>='0' && arr[i]<='9'){
            push(&s,arr[i]-'0');
            continue;
        }
        if(arr[i] == ' ' && arr[i]== '\t') continue;
        int n1=top(&s); pop(&s);
        int n2=top(&s); pop(&s);
        switch(arr[i]){
            case '+':
                    push(&s,n1+n2);
                    break;
            case '-':
                     push(&s,n1-n2);
                     break;
            case '*':
                     push(&s,n1*n2);
                     break;
            case '/':
                     push(&s,n1/n2);
                     break;
            case '^':
                     push(&s,pow(n1,n2));
                     break;
        }
    }
    return (top(&s));
}
int main(){
    char arr[]="+2/*34-53";
    printf("%d",pre(arr));
    printf("\n");
}