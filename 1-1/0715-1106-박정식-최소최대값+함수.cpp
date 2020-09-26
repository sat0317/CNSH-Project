#include <stdio.h>
int max(int p, int q){
    return p<q?q:p;
}
int min(int p, int q){
    return p<q?p:q;
}
int main(){
    int a, b, c, d, ma, mi;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ma=max(max(a, b), max(c, d));
    mi=min(min(a, b), min(c, d));
    printf("%d %d", mi, ma);
    return 0;
}
