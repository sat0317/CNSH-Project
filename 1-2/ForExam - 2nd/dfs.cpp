#include <stdio.h>
	int n, k, g[100][100], v[100];

void dfs(int t){
	v[t]=1;
	printf("%d\t", t);
	for(int i=1;i<=n;i++){
		if(g[t][i]==1&&v[i]==0){
			dfs(i);
		}
	}
}

int main(){
	scanf("%d %d", &n,&k);
	for(int i=0;i<k;i++){
		int s, e;
		scanf("%d %d", &s, &e);
		g[s][e]=g[e][s]=1;
	}
	dfs(1);
	
	return 0;
}
