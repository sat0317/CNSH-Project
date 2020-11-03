#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;
struct vertex{int now; int cnt;};

int v, e, stp, enp;
vector<int> g[10];
queue<vertex> q;
int visited[10];
vertex t;
int main(){
    
    scanf("%d %d", &v, &e);
    for(int i=1;i<=e;i++){
        int ims1, ims2;
        scanf("%d %d", &ims1, &ims2);
        g[ims1].push_back(ims2);
        g[ims2].push_back(ims1);
    }    
    
    scanf("%d %d", &stp, &enp);
    q.push({stp, 0});
    visited[stp]=1;
    
    while(!q.empty()){
        t=q.front();
        q.pop();
        
        if(t.now==enp){
            printf("%d\n", t.cnt);
            return 0;
        } else {
            for(int i=0;i<g[t.now].size();i++){
                if(visited[g[t.now][i]]==0){
                    q.push({g[t.now][i], t.cnt+1});
                    visited[g[t.now][i]]=1;
                }
            }
        }
    }
    
    printf("You cannot go from %d to %d", stp, enp);
    
    return 0;
}
