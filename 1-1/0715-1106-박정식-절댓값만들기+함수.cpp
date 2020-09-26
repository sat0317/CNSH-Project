#include <stdio.h>
int a(int a){
    return a>0?a:-a;
}

int main(){
    int c, b;
    scanf("%d %d", &c, &b);
    printf("%d", a(c-b));
    return 0;
}
