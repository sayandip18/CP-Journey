#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
        int n,s,p; cin>>n;
        p = sqrt(n); n=n-p;
        if(n%p==0) s=n/p;
        else
            s=n/p+1;
        s=s+p-1;
        cout<<s<<endl;
}
}
