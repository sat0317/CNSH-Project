#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int visited[20]={};
vector<int> v[20];
queue<int> q;
void bfs(int t){
	q.push(t);
	visited[t]=1;
	while(!q.empty()){
		int s=q.size();
		for(int i=0;i<s;i++){
			int t=q.front(); q.pop();
			printf("%d ", t);
			for(int j=0;j<v[t].size();j++){
				if(visited[v[t][j]]==0){
					q.push(v[t][j]);
					visited[v[t][j]]=1;
				}
			}
		}
	}
} 

int main(){
	v[1].push_back(2);
	v[2].push_back(1);
	
	v[2].push_back(3);
	v[3].push_back(2);
	
	v[1].push_back(4);
	v[4].push_back(1);
	
	bfs(1);
	
	return 0;
}
