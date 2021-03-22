#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, a;

    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(i%3!=0) printf("%d ", i);
        else printf("X ");
    }
    return 0;
}
