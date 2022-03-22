int gcd(int a, int b){
	int t;
	while(a){
		if(b>a){
			t=a;a=b;b=t;
		}
		a-=b;
	}
	return b;
}
