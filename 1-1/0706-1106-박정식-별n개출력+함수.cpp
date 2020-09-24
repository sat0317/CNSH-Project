#include <stdio.h>

void byul();
int n;  

int main(){
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    byul();
    
    return 0;
}

void byul(){
    printf("*");
}


