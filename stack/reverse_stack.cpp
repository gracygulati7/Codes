#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int y = st.top();
    st.pop();
    insertatbottom(st,x);
    st.push(y);
}
void reverse(stack<int> &st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,x);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}