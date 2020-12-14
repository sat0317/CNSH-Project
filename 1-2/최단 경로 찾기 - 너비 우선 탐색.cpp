#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

int v, e;
vector<int> G[100];
struct vertex{int now;vector<int> lo;} t;
queue<vertex> Q;
bool visited[100];

int main()
{
    int v1, v2;
    scanf("%d %d", &v,&e);

    for(int i=1;i<=e;i++)
    {
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2);
        G[v2].push_back(v1);
    }

    scanf("%d %d", &v1, &v2);
    t.lo.push_back(v1);
	
	Q.push({v1, t.lo});
    
    visited[v1]=1;

    while(!Q.empty())
    {
        t=Q.front(); Q.pop();
        if(t.now==v2)
        {
        	printf("%d", t.lo[0]);
            for(int i=1; i<t.lo.size();i++)
            {
            	printf("%d - %d\n", t.lo[i-1], t.lo[i]);
            }
            return 0;
        }
        else
        {
            for(int i=0; i<G[t.now].size();i++)
            {
                if(visited[G[t.now][i]]==0)
                {
                	t.lo.push_back(G[t.now][i]);
                    Q.push({G[t.now][i], t.lo});
                    visited[G[t.now][i]]=1;
                }
            }
        }        
    }    
    
    printf("Impossible!!\n");
}

