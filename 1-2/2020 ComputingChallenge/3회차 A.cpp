#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	char a[1000]={}; char *ptr;
    scanf("%s", a);

	ptr = strtok(a, ","); 
	while (ptr != NULL){
		printf("%s\n", ptr); 
		ptr = strtok(NULL, ",");
	}
    
    return 0;
}

