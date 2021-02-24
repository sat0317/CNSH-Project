#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	char x;
	//scanf("%c", &x);
	do
	{
		scanf("%c ", &x);
		printf("%c\n", x);
	} while(x!='q');
	    
    return 0;
}

