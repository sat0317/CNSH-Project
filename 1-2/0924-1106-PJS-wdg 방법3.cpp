#include <stdio.h>
#include <vector>

using namespace std;

vector<int> a[100], w[100];

int main(){
    int i, j, n, e, x, y, z;
    
    scanf("%d %d", &e, &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &x, &y, &z);
        a[x-1].push_back(y);
        w[x-1].push_back(z);
    }
    
    for(i=0;i<e;i++){
        printf("%d :", i+1);
        for(j=0;j<a[i].size();j++){
            printf("{%d: %d}", a[i][j], w[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
} 
