#include <stdio.h>

using namespace std;

int n, s, g[100][100], visited[100];
int q[100], rear, front=1;

int q_empty(){
    if(rear<front) return 1;
    else return 0;
}

void q_push(int s){
    q[++rear]=s;
}

void q_pop(){
    front++;
}

int q_top(){
    return q[front];
}

void BFS(int s){
    q_push(s);
    visited[s]=1;
    while(!q_empty()){
        s=q_top();
        printf("%d ", s);
        q_pop();
        for(int i=1;i<=n;i++){
            if(g[s][i]&&!visited[i]){
                q_push(i);
                visited[i]=1;
            }
        }
    }
}

int main(){
    int k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++){
        int s, e;
        scanf("%d %d", &s, &e);
        g[s][e]=g[e][s]=1;
    }
    
    BFS(1);
    
    
    return 0;
}

