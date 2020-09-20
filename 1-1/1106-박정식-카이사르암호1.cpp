#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int innum;
    char inchar;
    printf("암호화할 문자, 밀어내는 글자 수를 입력하시오: ");
    scanf("%c %d", &inchar, &innum);
    printf("암호화 한 글자: %c", (char)((inchar-'A'+innum)%26+'A'));

    return 0;
}
