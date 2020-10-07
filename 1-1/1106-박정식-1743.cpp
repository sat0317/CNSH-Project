#include <stdio.h>

int main(){
    int n, k, s, e, u, d[101]={0, };
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d %d %d", &s, &e, &u);
        d[s] = d[s]+u;
        d[e+1] = d[e+1]-u;
    }
    for(int i=1;i<=n;i++) {
        printf("%d\t", d[i]);
        d[i]+=d[i-1];
    }
    printf("\n");
    for(int i=1;i<=n;i++) {
        printf("%d\t", d[i]);
    }
    
    return 0;
}
