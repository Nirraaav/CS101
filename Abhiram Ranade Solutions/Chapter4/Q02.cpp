#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long double numerator = sqrt(2);
	long double prod = 1;
	repeat(n){
		prod *= numerator/2;
		numerator = sqrt(2 + numerator);
	}
	cout << prod << "\n";
}