#include<iostream>
using namespace std;

int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    if(t<=k) cout<<t;
    else if(t>=k && t<=n)
        cout<<k;
    else
        cout<<k-t+n;
}
