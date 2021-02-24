#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
char x, t='a';
scanf("%c", &x);
do
{
  printf("%c ", t);
  t+=1; //t+=1; 는 t=t+1과 같은 의미이다.
}while(t<x+1);
    
    return 0;
}

