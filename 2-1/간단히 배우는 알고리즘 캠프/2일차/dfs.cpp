#include <stdio.h>
#include <vector>

using namespace std;

int visited[20]={};
vector<int> v[20];

void dfs(int t){
	printf("%d", t);
	visited[t]=1;
	for(int i=0;i<v[t].size();i++){
		if(visited[v[t][i]]==0) dfs(v[t][i]);
	}
} 

int main(){
	v[1].push_back(2);
	v[2].push_back(1);
	
	v[2].push_back(3);
	v[3].push_back(2);
	
	v[1].push_back(4);
	v[4].push_back(1);
	
	dfs(1);
	
	return 0;
}
