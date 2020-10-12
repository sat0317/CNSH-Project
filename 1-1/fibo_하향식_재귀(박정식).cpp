#include <stdio.h>
int f(int n)  //함수 f는 fibonacci 수열을 표현한 재귀함수(하향식)임. 
{
    if(n<=2) return 1;
    return f(n-1)+f(n-2);
} 
int main()
{
    int n;
    printf("월을 입력하세요(1~12) : ");
    scanf("%d", &n);
    printf("%d 월 이후, 토끼는 몇 쌍이 될까요? : ", n);
    printf("%d ", f(n));
    printf("\n");
    return 0;
} 

