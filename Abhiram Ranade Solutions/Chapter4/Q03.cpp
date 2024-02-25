#include <simplecpp>

main_program{
	long double x;
	cin >> x;
	long double val = 1;
	long long int i = 2;
	long long int fac = 1;
	long double prodx = x;
	repeat(15){
		val += prodx/fac;
		prodx *= x;
		fac *= i;
		i += 1;
	}
	// cout << fixed;
	// cout.precision(10);
	cout << val << "\n";
}