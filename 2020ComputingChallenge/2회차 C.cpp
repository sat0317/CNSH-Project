#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int t=1, a[11]={};
    do{
    	scanf("%d", &t);
    	if(t>0&&t<=10) a[t]++;
	} while(t>0&&t<=10);
	
	for(int i=1;i<=10;i++){
		if(a[i])
		printf("%d : %d°³\n", i, a[i]);
	}
    
    return 0;
}

