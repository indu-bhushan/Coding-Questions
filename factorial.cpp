//Factorial of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,factorial = 1;
    cin>>n;
    for(int i = n; i>=1; i--){
        factorial = factorial*i;
        
    }
    cout<<"The factorial of the number is "<<factorial<<endl;

    return 0;
}