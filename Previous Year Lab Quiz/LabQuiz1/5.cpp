#include <simplecpp>

long double nCr(long long int n, long long int r){
	long double ans = 1;
	for(long long int i = 0; i < n - r; i++){
		ans *= ((long double) (n - i))/((long double) (n - r - i));
	}
	return ans;
}

main_program{
	long long int N, R;
	cin >> N >> R;
	long double answer = nCr(N, R);
	// cout << fixed;
	cout.precision(20);
	cout << answer << "\n";
}

