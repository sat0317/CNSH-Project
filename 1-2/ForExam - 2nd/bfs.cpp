#include <stdio.h>
	int n, k, g[100][100], v[100];
int rear, front=1, q[101];
bool q_empty(){
	return rear<front;
}
int q_front(){
	return q[front];
}
void q_push(int t){
	q[++rear]=t;
}
void q_pop(){
	front++;
}

void bfs(int t){
	q_push(t);
	v[t]=1;
	while(!q_empty()){
		t=q_front();
		q_pop();
		printf("%d\t", t);
		for(int i=1;i<=n;i++){
			if(g[t][i]==1&&v[i]==0){
				v[i]=1;
				q_push(i);
			}
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
	bfs(1);
	
	return 0;
}
