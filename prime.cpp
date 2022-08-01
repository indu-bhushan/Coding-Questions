#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // logic part
    int count=0;
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    cout << count << endl;

    if (count==0)
    {
        cout << "PRIME" << endl;
    }else{
        cout << "NOT PRIME" << endl;
    }
    return 0;
}