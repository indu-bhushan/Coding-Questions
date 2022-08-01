#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    // logic part

    int sum=0;
    while(temp>0)
    {
        int ld = temp%10;
        int cube = ld*ld*ld;
        sum+=cube;
        temp/=10;
    }
    cout << temp << endl;
    cout << n << " " << sum << endl;
    if (sum==n)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}