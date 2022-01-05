int f(int n){
	int m=0;
	for(int i=1;i<=n;i++){
		if(n%i==0) m++;
	}
	return m;
}
