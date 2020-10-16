#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		long long c=0,res=0;
		for(int i=0;i<s.length(); i++){
			++res;
			if(s[i]=='+')++c;
			else --c;
			if(c<0){c=0;res+=(i+1);}
		}
		cout<<res<<endl;
	}
}

