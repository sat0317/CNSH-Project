#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i, innum;
    char arr[26]; //알파벳 26개
    char inchar;

    for(i='A'i<='Z';i++){//알파벳 26개
        arr[i]=i;
    }
    printf("암호화할 문자, 밀어내는 글자 수를 입력하시오: ");
    scanf("%c %d", &inchar, &innum);
    printf("암호화 한 글자: %c", arr[(inchar-'A'+innum)%26]);
    return 0;
}
