#include <stdio.h>
#define td(a, b) ((a)+(b)*0.1)
	int a, b, c, d;

void print(char n, char m){
	printf("%d%c%d%c%d=%d\n", a, n, b, m, c, d);
}

double gn(double a, char b, double c){
	switch(b){
		case '+':
			return a+c;
		case '-':
			return a-c;
		case '*':
			return a*c;
		case '/':
			return a/c;
		case '.':
			return td(a, c);
	}
}


int main(){
	int n;
	const char giho[6]="+-*/.";
	int imsi;
	
	scanf("%d", &n);
	
	for(int k=0;k<n;k++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		imsi=0;
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				if(i==j) continue;
				if(gn(gn(a, giho[i], b), giho[j], c)==(double)d){
					print(giho[i], giho[j]);
					imsi=1;
					break;
				}
			}
			if(imsi) break;
			for(int j=2;j<5;j++){
				if(i==j) continue;
				if(gn(a, giho[i], gn(b, giho[j], c))==(double)d){
					print(giho[i], giho[j]);
					imsi=1;
					break;
				}
			}
			if(imsi) break;
		}
		if(imsi) continue;
		for(int i=2;i<5;i++){
			for(int j=0;j<4;j++){
				if(i==j) continue;
				if(gn(gn(a, giho[i], b), giho[j], c)==(double)d){
					print(giho[i], giho[j]);
					imsi=1;
					break;
				}
			}
			if(imsi) break;
			for(int j=4;j<5;j++){
				if(i==j) continue;
				if(gn(a, giho[i], gn(b, giho[j], c))==(double)d){
					print(giho[i], giho[j]);
					imsi=1;
					break;
				}
			}
			if(imsi) break;
		}
	}
	
	
	return 0;
}
