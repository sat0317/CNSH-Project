int f(int a){
	for(int i=1;i<=n;i++){
		if(d[i]==k) return i;
	}
	return -1;
}
