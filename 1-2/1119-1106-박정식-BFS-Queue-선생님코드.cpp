#include <stdio.h>
#include <queue>
using namespace std;

int n, k, g[100][100], v[100];
queue<int> q;

void bfs(int t){
    v[t]=1;
    q.push(t);
    while(!q.empty()){
        t=q.front();
        q.pop();
        printf("%d ", t);
        for(int i=1;i<=n;i++){
            if(g[t][i]&&!v[i]){
                v[i]=1;
                q.push(i);
            }
        }
    }
}


int main(){
    scanf("%d %d", &n, &k);
    for(int i=1, s, e;i<=k;i++){
        scanf("%d %d", &s, &e);
        g[s][e]=g[e][s]=1;
    }
    bfs(1);
    return 0;
}
