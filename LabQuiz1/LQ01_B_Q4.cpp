 #include <simplecpp>

main_program{
	long long int n, r;
	cin >> n >> r;
	long double ans = 1;
	if(r <= n - r){
		for(long long int i = 1; i <= r; i++){
			ans *= (n + 1 - i);
			ans /= i;
		}
	}else{
		for(long long int i = 1; i <= n - r; i++){
			ans *= (n + 1 - i);
			ans /= i;
		}
	}
	cout << ans << "\n";
}