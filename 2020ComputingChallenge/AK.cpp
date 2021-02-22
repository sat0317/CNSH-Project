#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int a;
    scanf("%d", &a);
    switch(a){
    	case 3: case 4: case 5:
    		printf("spring"); break;
    	case 6: case 7: case 8:
    		printf("summer"); break;
    	case 9: case 10: case 11:
    		printf("fall"); break;
    	case 12: case 1: case 2:
    		printf("winter"); break;
	}
    
    return 0;
}

