#include <bits/stdc++.h>
#include<iostream>
#include <queue>
using namespace std;
// priority_queue<int,vector<int>,greater<int>> pq;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq_min;
    priority_queue<int> pq_max;
    pq_max.push(1);
    pq_max.push(4);
    pq_max.push(6);
    // cout<<pq_max.top(6);
    pq_max.pop();
    cout<<pq_max.size();
    return 0;
}