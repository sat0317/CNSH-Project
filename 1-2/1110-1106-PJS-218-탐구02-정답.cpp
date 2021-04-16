#include <stdio.h>
int main( )
{
    int n, i, sum = 0;
    scanf("%d", &n);  
    for(i = 1; i <= n; i ++)
    if(i%3 == 0 || i%5 == 0) sum += i;
    printf("%d\n", sum);
    return 0;
}

