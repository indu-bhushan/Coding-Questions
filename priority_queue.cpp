#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int>pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.emplace(10);

    // cout<<pq.top()<<endl;

    // pq.pop();
    // cout<<pq.top()<<endl;

    // Minimum Heap
    priority_queue<int, vector<int> , greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    
    cout<<pq.top()<<endl;
    return 0;
}   