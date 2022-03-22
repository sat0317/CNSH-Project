#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <memory.h>
#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))

int main(){
    int n, i, t;
int a[24]={};
scanf("%d", &n); //개수 입력받기
for(i=1; i<=n; i++) //개수만큼 입력받기
{
  scanf("%d", &t); //읽어서
  a[t]=a[t]+1; //들어있던 값에 1만큼 더해 다시 저장. a[t]+=1 과 같다.
}
for(i=1; i<=23; i++)
{
	
  printf("%d ", a[i]); //1~23 번 배열에 저장되어있는 값 출력하기
}
    
    return 0;
}

