#include <stdio.h>
#define gtn(a) (a-'0')
char gov[15], id[5], name[1000];

int main(){
	scanf("%s %s %s", gov, id, name);
	printf("%c-%c NO.%d\n", id[0], id[1], gtn(id[2])*10+gtn(id[3]));
	printf("%s(%c)", name, (gtn(gov[7])%2?'M':'F'));
	printf("\nBirthDay %d/%d", gtn(gov[2])*10+gtn(gov[3]), gtn(gov[4])*10+gtn(gov[5])) ;
	return 0;
}
