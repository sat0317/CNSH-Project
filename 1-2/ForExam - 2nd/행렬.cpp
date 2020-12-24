#include <stdio.h>

int n, a[100][100];
int v[100];
int min=2147483647;

void f(int r, int sc){
	if(r==n+1){
		if(sc<min) min=sc;
		return;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			v[i]=1;
			f(r+1, sc+a[r][i]);
			v[i]=0;
		}
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	f(1, 0);
	printf("%d", min);
	
	return 0;
}
