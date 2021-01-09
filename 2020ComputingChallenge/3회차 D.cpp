#include <stdio.h>
#define MAX 1000+1
int n, k, g[MAX][MAX], aim, end, cnt;
int v[MAX];

void DFS(int t){
    v[t]=1;
    cnt++;
    if(end) return;
    if(aim==t) {
    	printf("%d번째에서 %d를 찾았다.", cnt, aim);
	}
    for(int i=1;i<=n;i++){
        if(g[t][i]==1&&v[i]==0){
            DFS(i);
        }
    }
}
int main(){
    scanf("%d %d %d", &n, &k, &aim);
    for(int i=1, s, e;i<=k;i++){
        scanf("%d %d", &s, &e);
        g[s][e]=1;
        g[e][s]=1;
    }
    
    DFS(1);
    
    return 0;
}
