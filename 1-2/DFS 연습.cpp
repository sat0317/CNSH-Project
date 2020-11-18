#include <stdio.h>
#include <stack>

using namespace std;

int g[100][100], n, k, v[100];
stack<int> s;

void DFS(int t){
	s.push(t);
	while(!s.empty()){
		int now=s.top();
		s.pop();
		printf("%d ", now); 
		v[now]=1;
		for(int i=n;i>=1;i--){
			if(!v[now]&&g[now][i]){
				s.push(i);
			}
		}
	}
}

int main(){
	int s, e;
	scanf("%d %d", &n, &k);
	for(int i=0;i<k;i++){
		scanf("%d %d", &s, &e);
		g[s][e]=g[e][s]=1;
	}
	
	DFS(1);
	
	return 0;
}
