#include <stdio.h>
#include <vector>

using namespace std;

int visited[101]={};
vector<int> v[101];

void dfs(int t){
	visited[t]=1;
	for(int i=0;i<v[t].size();i++){
		if(visited[v[t][i]]==0) dfs(v[t][i]);
	}
} 

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		int t1, t2;
		scanf("%d %d", &t1, &t2);
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	
	dfs(1);
	int cnt=0;
	for(int i=2;i<=n;i++) cnt+=visited[i];
	printf("%d", cnt);
	return 0;
}
