long long int f(long long int n){
	long long int ans=0;
	while(n){
		ans*=10;
		ans+=n%10;
		n/=10;
	}
	return ans;
}
