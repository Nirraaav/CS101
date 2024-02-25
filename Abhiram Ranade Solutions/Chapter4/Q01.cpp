#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long long int fac = 1;
	long long int i = 1;
	repeat(n){
		fac *= i;
		i += 1;
	}
	long long int val = 0;
	long long int fac2 = 1;
	long long int sign = 1;
	i = 1;
	repeat(n+1){
		val += sign * (fac/fac2);
		sign *= (-1);
		fac2 *= i;
		i += 1;
	}
	cout << val << "\n";
}