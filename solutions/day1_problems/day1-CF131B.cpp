#include <iostream>
#include <stdio.h>
using namespace std;
int a[22];
int main(){
	int n,x;
	long long ans=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		x+=10;
		ans+=a[20-x];
		a[x]++;
	}
	printf("%lld\n",ans);
}
