
long long int lcm(int x, int y){
	long long int a=x, b=y, g;
	
	return a*b/gcd(a, b);
}
