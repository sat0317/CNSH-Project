#include <stdio.h>
struct stu{
    int stnum;
    char name[10];
    int point;
};

int main(){
    stu st1, st2;
    scanf("%d %s %d", &st1.stnum, &st1.name, &st1.point);
    scanf("%d %s %d", &st2.stnum, &st2.name, &st2.point);
    
    if(st1.point>=st2.point)
    printf("%d %s %d\n", st1.stnum, st1.name, st1.point);
    if(st2.point<=st2.point)
    printf("%d %s %d", st2.stnum, st2.name, st2.point);
    
    return 0;
}
