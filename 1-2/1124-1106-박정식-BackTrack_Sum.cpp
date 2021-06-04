#include <stdio.h>

int sum;

void f(int n){
    if(n<=0){
        if(n==0) sum++;
        return;
    }
    for(int i=1;i<=n;i++){
        f(n-i);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d\n", sum);
    return 0;
}
