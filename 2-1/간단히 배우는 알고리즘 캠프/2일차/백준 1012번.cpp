#include <stdio.h>

int dx[]={0, 1, -1, 0};
int dy[]={1, 0, 0, -1};
int visit[51][51]={};
int map[51][51]={};
int m, n, k;

void find(int x, int y){
	if(x>m||x<1||y>n||y<1){
		return;
	}
	if(map[x][y]==0||visit[x][y]==1) return;
	visit[x][y]=1;
	for(int i=0;i<4;i++){
		find(x+dx[i], y+dy[i]);
	}
}

void goshoot(){
	int cnt=0;
	
	scanf("%d %d %d", &m, &n, &k);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			visit[i][j]=0;
			map[i][j]=0;
		}
	}
	for(int i=0;i<k;i++){
		int x, y; 
		scanf("%d %d", &x, &y);
		map[x+1][y+1]=1;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(visit[i][j]==0&&map[i][j]==1){
				find(i, j);
				cnt++;
			} 
		}
	}
	printf("%d\n", cnt);
} 

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++) goshoot();
	return 0;
}
