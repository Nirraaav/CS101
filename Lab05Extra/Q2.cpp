#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long long int rev_n = 0;
	long long int temp = n;
	long long int digits = 0;
	while(temp){
		digits++;
		rev_n = rev_n * 10 + (temp % 10);
		temp /= 10;
	}

	long long int ans = 1;
	long long int count = (digits+1)/2;
	while(count--){
		ans *= (n % 10 + rev_n % 10);
		n /= 10;
		rev_n /= 10;
	}

	cout << ans << "\n";
}