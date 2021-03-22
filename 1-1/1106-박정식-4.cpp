#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, i, m, d, n;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    for(i=1;i<n;i++){
        a=a*m+d;
    }
    printf("%d", a);
    return 0;
}
