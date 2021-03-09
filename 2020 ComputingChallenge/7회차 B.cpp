#include <stdio.h>
#include <memory.h>
	int n, un[51], ri[51], ans[51][51], endinggo=1, realans[1000][51][51], realanscheck=0;
int f(int);

int hcheck(int y){
	int sum=0;
	for(int i=0;i<n;i++){
		if(ans[i][y]==-1) return 1;
		else sum+=ans[i][y];
		if(sum>un[y]) return 0;
	}
}

void go(int x, int y, int sum){
	if(sum>ri[x]) return;
	if(y==n){
		f(x+1);
	}
	if(y==n-1){
		ans[x][y]=ri[x]-sum;
		f(x+1);
	}
	else for(int i=0;i<ri[x]-sum&&endinggo;i++){
		ans[x][y]=i;
		go(x, y+1, sum+i);
	}
		ans[x][y]=-1;
}

int f(int x){
	for(int i=0;i<n;i++){
		if(!hcheck(i)){
			return 0;
		}
	}
	if(x==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				realans[realanscheck][i][j]=ans[i][j];
			}
		}
		realanscheck++;
		return 1;
	}
	go(x, 0, 0);
}

int main(){
	int imsi;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &ri[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d", &un[i]);
	}
	
	memset(ans, -1, sizeof(ans));
	
	f(0);
	int maxn=0, maxp=1, minn=2147483647;
	for(int i=0;i<realanscheck;i++){
		endinggo=1;
		maxn=0;
		for(int k=0;k<n&&endinggo;k++){
			for(int j=0;j<n;j++){
				if(realans[i][j][k]>minn) {
					endinggo=0;
					break;
				}
				if(realans[i][j][k]>maxn){
					maxn=realans[i][j][k];
				}
			}
		}
		
		if(maxn<minn){
			minn=maxn;
			maxp=i;
		}
	}
	printf("%d\n", minn);
	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", realans[maxp][i][j]);
			}printf("\n");
		}
	return 0;
}
