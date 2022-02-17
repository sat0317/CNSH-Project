#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    char data[2001];
    fgets(data, 2000, stdin);
    printf("%s", data);
    
    return 0;
}

