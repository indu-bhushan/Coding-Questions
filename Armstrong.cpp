//Armstrong number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n1,count=0,sum;
    cout<<"Enter the number"<<endl;
    cin>>num;
    sum=num;
    while(num>0){
        n1=num%10;
        count = count+(n1*n1*n1);
        num=num/10;
        }
        if(sum==count){
            cout<<"The number is Armstrong number"<<endl;
        }
        else{
            cout<<"The number is not a Armstrong number"<<endl;
        }
        return 0;
}