//Sum of numbers in given range
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans1 = ((n-1)*n)/2;
    int ans2 = (m*(m+1))/2;
    int ans3 = ans2-ans1;
    cout<<"The sum of numbers in given range "<<ans3<<endl;
    return 0;
}