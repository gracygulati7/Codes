#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixtoprefix(string s){
    stack<char> st;
    string res;
    for(int i=s.length()-1; i>=0; i--){
        // if operand then print it means add it to result
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            res = s[i] + res;
        }
        // if ')' then push it to stack
        else if(s[i] == ')'){
            st.push(s[i]);
        }
        // if '(' then pop all the elements from stack until ')' is found
        else if(s[i] == '('){
            while(!st.empty() && st.top() != ')'){
                res = st.top() + res; 
                st.pop();
            }
            // pop ')' from stack
            if(!st.empty()){
                st.pop();
            }
        }
        // if operator then pop from stack and print until an operator with less precedence is found
        // and when less precedence operator is found then push it in stack
        else{
            while(!st.empty() && prec(st.top()) >= prec(s[i])){
                res = st.top() + res;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    // pop all the remaining elements from stack
    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }
    // return the result
    return res;
}
int main(){
    cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}