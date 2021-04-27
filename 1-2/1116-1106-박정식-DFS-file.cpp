#include <stdio.h>
#define N (100)

FILE *in = fopen("in.txt", "r");
FILE *out = fopen("out.txt", "w");
int n, s, g[N][N], visited[N];


void DFS(int s){
    int i;
    visited[s]=1;//Jungyo
    fprintf(out, "%d", s);
    for(i=1;i<=n;i++){
        if(g[s][i]&&!visited[i])//Jungyo
            DFS(i);//Jungyo
    }
}

int main(){
    int x, y;
    fscanf(in, "%d %d", &n, &s);
    
    while(fscanf(in, "%d %d", &x, &y)!=EOF){
        g[x][y]=g[y][x]=1;
    }
    
    DFS(s);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
