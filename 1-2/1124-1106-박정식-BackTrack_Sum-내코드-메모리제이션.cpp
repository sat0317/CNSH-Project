#include <stdio.h>
int ns[10000]={}; 
int f(int n){
    int k=0;
    if(n<=0){
        if(n==0) return 1;
        return 0;
    }
    if(ns[n]) return ns[n];
    for(int i=0;i<n;i++){
        k+=f(i);
    }
    ns[n]=k;
    return k;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
