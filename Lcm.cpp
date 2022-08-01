// Lcm of the two number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the two number :"<<endl;
    cin>>x>>y;
    int lc;
    lc = min(x,y);
    
    int gcdans;
    for(int i = lc; i>=1; i--){
        if(x%i == 0 && y%i == 0){
            gcdans = i;
            break;
        }
    }
        
        int lcm = (x*y)/gcdans;
        cout << "The gcd is " << gcdans << endl;
        cout << "The lcm is " << lcm << endl;

}