#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
	int a, b, c, day;
	scanf("%d %d %d", &a, &b, &c);
   day=1;
while(day%a!=0 || day%b!=0 || day%c!=0) day++; //이게 무슨 의미일까?
printf("%d", day); 
    
    return 0;
}

