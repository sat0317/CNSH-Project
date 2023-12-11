#include <stdio.h>

int max(int a, int b){return a>b?a:b;}
int main(){
	int mx=-1;
	int d[55][55]={};
	int n, m;
	
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &d[i][j]);
		}
	}
	
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			int temp=d[x][y];
			for(int p=1;p<=m;p++){
				if(x+p<=n)	temp+=d[x+p][y];
				if(y+p<=n)	temp+=d[x][y+p];
				if(x-p>0)	temp+=d[x-p][y];
				if(y-p>0)	temp+=d[x][y-p];
			}
			
			mx=max(mx, temp);
		}
	}
	
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			int temp=d[x][y];
			for(int p=1;p<=m;p++){
				if(x+p<=n	&& y+p<=n)	temp+=d[x+p][y+p];
				if(x-p>0	&& y+p<=n)	temp+=d[x-p][y+p];
				if(x+p<=n	&& y-p>0 )	temp+=d[x+p][y-p];
				if(x-p>0	&& y-p>0 )	temp+=d[x-p][y-p];
			}
			
			mx=max(mx, temp);
		}
	}
	
	printf("%d", mx);
	return 0;
}
