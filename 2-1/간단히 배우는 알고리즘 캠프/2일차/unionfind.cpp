#include <stdio.h>

int parent[100];

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
	
	
	return 0;
}
