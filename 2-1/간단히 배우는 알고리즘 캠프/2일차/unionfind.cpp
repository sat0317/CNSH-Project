#include <stdio.h>

int parent[100];

int find(int t){ //��Ʈ��� ����, find
	if(parent[t]==t) return t;
	else return parent[t]=find(parent[t]);
}

void unity(int x, int y){ //�� Ʈ�� ��ġ��, union 
	x=find(x);
	y=find(y);
	if(x<y) parent[y]=x;
	else parent[x]=y;
}

int main(){
	
	
	return 0;
}
