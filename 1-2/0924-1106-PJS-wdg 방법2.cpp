#include <stdio.h>
#include <vector>

using namespace std;

struct pos{
    int x;
    int w;
};

vector<pos> a[100];

int main(){
    int i, j, n, e, x, y, z;
    
    scanf("%d %d", &e, &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &x, &y, &z);
        a[x-1].push_back({y, z});
    }
    
    for(i=0;i<e;i++){
        printf("%d :", i+1);
        for(j=0;j<a[i].size();j++){
            printf("{%d: %d}", a[i][j].x, a[i][j].w);
        }
        printf("\n");
    }
    
    
    return 0;
}
