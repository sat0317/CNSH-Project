#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm> 
using namespace std;

int visited[1001]={};
vector<int> v[1001];
queue<int> q;
int n, m, t;


void bfs(int t){
	int visit[1001]={};
	q.push(t);
	visit[t]=1;
	while(!q.empty()){
		int s=q.siz	e();
		for(int i=0;i<s;i++){
			int t=q.front(); q.pop();
			printf("%d ", t);
			for(int j=0;j<v[t].size();j++){
				if(visit[v[t][j]]==0){
					q.push(v[t][j]);
					visit[v[t][j]]=1;
				}
			}
		}
	}
} 

void dfs(int t){
	printf("%d ", t);
	visited[t]=1;
	for(int i=0;i<v[t].size();i++){
		if(visited[v[t][i]]==0) dfs(v[t][i]);
	}
}


int main(){
	scanf("%d %d %d", &n, &m, &t);
	for(int i=0;i<m;i++){
		int t1, t2;
		scanf("%d %d", &t1, &t2);
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	for(int i=0;i<n;i++){
		sort(v[i].begin(), v[i].end());
	}
	
	dfs(t);
	printf("\n");
	bfs(t);
	
	return 0;
}
