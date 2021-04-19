#include <stdio.h>
#include <stack>
#define MAX 1000+1

using namespace std;

int n, k, g[MAX][MAX];
int v[MAX];
stack<int> s;

void DFS(int t){
    s.push(t);
    while(!s.empty()){
        t=s.top();
        s.pop();
        if(!v[t]){
            printf("%d ", t);
            v[t]=1;
            for(int i=n;i>=1;i--){
                if(g[t][i]==1&&v[i]==0){
                    s.push(i);
                }
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &k);
    for(int i=1, s, e;i<=k;i++){
        scanf("%d %d", &s, &e);
        g[s][e]=1;
        g[e][s]=1;
    }
    
    DFS(1);
    
    return 0;
}
