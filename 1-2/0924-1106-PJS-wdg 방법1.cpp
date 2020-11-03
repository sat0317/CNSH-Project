#include <stdio.h>
#include <vector>
using namespace std;

struct geans{
    int to;
    int ga;
};

    vector<int> a[100];
    

geans getting(int x, int y){
    geans k;
    k.ga=a[x][y*2+1];
    k.to=a[x][y*2];
    return k;
}


int main(){
    int i, j, n, e, x, y, z;
    
    scanf("%d %d", &e, &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &x, &y, &z);
        a[x-1].push_back(y);
        a[x-1].push_back(z);
    }
    
    for(i=0;i<e;i++){
        printf("%d :", i+1);
        for(j=0;j<a[i].size()/2;j++){
            geans t=getting(i, j);
            printf("{%d: %d}", t.to, t.ga);
        }
        printf("\n");
    }
    
    return 0;
}
