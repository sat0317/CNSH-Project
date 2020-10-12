#include <stdio.h>
int n, repeatN;
int f(int prevN, int nowN)  //함수 f는 fibonacci 수열을 표현한 재귀함수(상향식)임. 
{
    repeatN++;
    if(repeatN>=n)
        return nowN;
    return f(nowN, prevN+nowN);
}
int main()
{
    printf("월을 입력하세요(1~12) : ");
    scanf("%d", &n);
    printf("%d 월 이후, 토끼는 몇 쌍이 될까요? : ", n);
    printf("%d", f(0, 1));
    printf("\n");
    return 0;
} 

