#include <stdio.h>
#define MAX 100
int n, k, G[MAX+1][MAX+1];
int v[MAX+1];

void DFS(int t)
{
  printf("%d ", t);
  v[t] = 1;
  for(int i=1; i<=n; i++)
    if(G[t][i]==1 && v[i]==0)
      DFS(i);
}

int main()
{
  scanf("%d%d", &n, &k);
  for(int i=1, s,e; i<=k; i++)
  {
    scanf("%d%d", &s, &e);
    G[s][e] = 1; G[e][s] = 1;
  }
  DFS(1);
  
  printf("\n");
}
