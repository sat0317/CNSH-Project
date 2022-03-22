long long int pow(int a, int b){
	long long int ans=1;
	if(a==1||a==0) return a;
	for(int i=0;i<b;i++){
		ans*=a;
	}
	return ans;
}
