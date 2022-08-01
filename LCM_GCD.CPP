#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the two number :"<<endl;
    cin>>x>>y;

    int ch;
    ch = min(x,y);

    for( int i = ch; i>=1; i--){
        if(x%i == 0 && y%i == 0){
            cout<<"Gcd of two number is "<< i <<endl;
            break;
            
        }

    }
}