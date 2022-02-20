#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int y, m, d
;    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);
    return 0;
}

