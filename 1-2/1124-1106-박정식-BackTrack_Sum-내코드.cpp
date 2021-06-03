#include <stdio.h>

int f(int n){
    int k=0;
    if(n<=0){
        if(n==0) return 1;
        return 0;
    }
    for(int i=0;i<n;i++){
        k+=f(i);
    }
    return k;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
