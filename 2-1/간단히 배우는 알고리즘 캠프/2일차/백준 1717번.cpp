#include <stdio.h>

int parent[1000001];
int n, m;

int find(int t){ //루트노드 갱신, find
	if(parent[t]==t) return t;
	else return parent[t]=find(parent[t]);
}

void unity(int x, int y){ //두 트리 합치기, union 
	x=find(x);
	y=find(y);
	if(x<y) parent[y]=x;
	else parent[x]=y;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<=n;i++){
		parent[i]=i;
	}
	for(int i=0;i<m;i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a){
			printf("%s\n", find(b)==find(c)?"YES":"NO");
		} else {
			unity(b, c);
		}
	}
	
	return 0;
}
