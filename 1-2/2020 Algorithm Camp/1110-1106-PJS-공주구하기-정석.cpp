#include <stdio.h>

int n, m=1000;
int p[500], d[500], g[500];

int ca(int a, int k){
	return p[k]<=p[a]+d[a];
}
int cb(int b, int k){
	return (p[k]<=p[b]+d[k])&&g[k];
}

int f(int a, int b, int k){
	int c=0;
	if(k==n-1){
		if(ca(a, k)&&cb(b, k)) c=1;
		else c=0;
	} else {
		if(ca(a, k)) c+=f(k, b, k+1)%m;
		if(ca(b, k)) c+=f(a, b, k+1)%m;
		c+=f(a, b, k+1)%m;
	}
	return c;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d", &p[i], &d[i], &g[i]);
	}
	printf("%d\n", f(0, 0, 1));
	
	return 0;
}
