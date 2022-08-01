//Reverse of the given  number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0,rev=0;
    while (n)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    cout << rev << endl;
    
    
    return 0;
}