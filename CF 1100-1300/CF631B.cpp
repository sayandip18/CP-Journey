#include<iostream>
using namespace std;
int l[5005],r[5005];
int vl[5005],vr[5005];
int n,m,k;
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++){
		int t,a,b;
		cin>>t>>a>>b;
		if(t==1){
			l[a-1]=b;
			vl[a-1]=i;
		}
		else{
			r[a-1]=b;
			vr[a-1]=i;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vl[i]>vr[j])
			    cout<<l[i]<<"\t";
			else
			    cout<<r[j]<<"\t";
		}
		cout<<"\n";
	}
}
