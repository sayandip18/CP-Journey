#include <bits/stdc++.h>
using namespace std;
int T;
int A,B,C,D;
int main(){
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>A>>B>>C>>D;
		if(A==0 && D == 0){
			if(B % 2 == 1){
				cout<<"Tidak Ya Tidak Tidak\n";
			} else {
				cout<<"Tidak Tidak Ya Tidak\n";
			}
		} else if(B == 0 && C == 0){
			if(A % 2 == 1){
				cout<<"Ya Tidak Tidak Tidak\n";
			} else {
				cout<<"Tidak Tidak Tidak Ya\n";
			}
		} else {
			if((A+B) % 2 == 1){
				cout<<"Ya Ya Tidak Tidak\n";
			} else{
				cout<<"Tidak Tidak Ya Ya\n";
			}
		}
	}
}
