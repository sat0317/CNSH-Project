#include <stdio.h>
#define N 100
FILE *in = fopen("in.txt");
FILE *out = fopen("out.txt", "w");
int n, s, g[N][N], visited[N];
int q[N], rear, front=1;

int Q_empty(){
    if(rear<front) return 1;
    else return 0;
}

int Q_top(){return q[front];}

void Q_pop(){
    front++;
}

void Q_push(int s){
    rear++;
    Q[rear]=s;
}

void BFS(){
    int s, i;
    Q_push(s);
    visited[s]=1;
    while(Q_empty())//Jungyo
    {
        s=Q_top();
        fprintf(out, "%d", s);
        //Jungyo
        for(i=1;i<=n;i++){
            if(g[s][i]==1&&visited[i]!=1){
                //Jungyo
                //Jungyo
            }
        }
    }
}
