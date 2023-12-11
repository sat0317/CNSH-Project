#include <stdio.h>
#include <string.h>

void gos(){
	long long int k, l, r, ans=0;
	scanf("%lld %lld %lld", &k, &l, &r);
	l--;r--;
	if(l==r){
		int temp=(k-__builtin_popcount(l))%2;
		printf("%d\n", temp);
	}
	else if(l-r<=3){
		long long int ans=0;
		for(long long int t=l;t<=r;t++){
			ans+=(k-__builtin_popcount(t))%2;
		}
		printf("%d\n", ans);
	}
	else{
		long long int ans=0;
		for(long long int t=l;t<=(l/4+1)*4;t++){
			ans+=(k-__builtin_popcount(t))%2;
		}
		ans+=((l/4+1)-(r/4))*2;
		for(long long int t=r/4*4;t<=r;t++){
			ans+=(k-__builtin_popcount(t))%2;
		}
		printf("%d\n", ans);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) gos();
}
