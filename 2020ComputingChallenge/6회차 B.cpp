#include <stdio.h>
#include <queue>
#include <vector>
#include <string.h>
#include <stdlib.h>

int n, visited[101];
vector<int> g[101];

void dfs(vector<int> lo, int time, int stp){
	lo.push_back(stp);
	int imsi=1;
	
	for(int i=0;i<g[stp].size();i++){
		if(visited[g[stp][i]]==0){
			imsi=0;
			visited[g[stp][i]]=1;
			dfs(lo, time, g[stp][i]);
		}
	}
	
	if(imsi) return time;
}

int main(){
	int im;
	char *parse[101];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &im);
		parse=strtok(input," ");
		int j=1;
		int count=1;
		while(parse[i]=strtok(NULL," ")){
			j++;
			count++;
		}
		for(j=0;j<count;j++){
			g.push_back(parse[j]);
		}
	}
	vector<int> lo;
	visited[1]=1;
	dfs(lo, 1, 1);
	
	return 0;
}
