#include <stdio.h>
int abs(int x){
	return x>0?x:-x;
}
int min(int a, int b){
	return a<b?a:b;
}
int max(int a, int b){
	return a>b?a:b;
}
int x[500001];
int y[500001];
int w[500001];
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d", x+i, y+i, w+i);
	}
	for(int i=0;i<n;i++){
		int mi=0;
		int mx=2147482647;
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(w[i]){
				if(x[i]==x[j]){
					mi=max(abs(y[i]-y[j]), mi);
				}
				else {
					mi=max(abs(x[i]-x[j]), mi);
				}
			}
			else {
				if(x[i]==x[j]){
					mx=min(abs(y[i]-y[j]), mx);
				}
				else if(y[i]==y[j]){
					mx=min(abs(x[i]-x[j]), mx);
				}
			}
		}
		printf("%d\n", w[i]?mi:mx);
	}
}
