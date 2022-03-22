#include <stdio.h>
	int ans, n, s, e, m, x, y
;int g[100][100];
int visited[100];
void dfs(int s, int t){
	if(s==e) {
		ans=t;
		return;
	}
	visited[s]=1;
	t++;
	for(int i=0;i<n;i++){
		if(visited[i]==0&&g[s][i]==1&&ans==0){
			dfs(i, t);
		}
	}
	return ;
}

int main(){
	
	scanf("%d %d %d %d", &n, &s, &e, &m);
	
	for(int i=0;i<m;i++){
		scanf("%d %d", &x, &y);
		g[x][y]=g[y][x]=1;
	}
	
	dfs(s, 0);
	
	printf("%d", ans?ans:-1);
	
	return 0;
}
