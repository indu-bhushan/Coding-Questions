#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); // {1,2,4}

    q.back() +=5;

    cout<<q.back()<<endl; // Print 9

    q.pop(); // {2,9}

    cout<<q.front()<<endl; // prints 2
    // size swap empty same as stack
    return 0;
}   