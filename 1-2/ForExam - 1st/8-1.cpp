#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fi, *fo;
	int a, b;
	fi = fopen("input8_1.txt", "r");
	fo = fopen("output8_1.txt", "w");
	
	if(fi==NULL || fo==NULL) exit(0);
	
	fscanf(fi, "%d %d", &a, &b);
	fprintf(fo, "%d\n", a+b);
	fprintf(fo, "%d\n", a-b>0?a-b:b-a);
	fprintf(fo, "%d\n", a*b);
	fprintf(fo, "%d\n", a>b?a:b);
	
	fclose(fi);
	fclose(fo);
	
	return 0;
}
