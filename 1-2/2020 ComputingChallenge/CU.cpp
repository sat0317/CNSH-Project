int f(){
	int max=-2147483648;
	int mp=0;
	for(int i=0; i<n; i++){
		if(d[i]>max){
			mp=i;
			max=d[i];
		}
	}
	return mp+1;
}
