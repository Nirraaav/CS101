#define NDEBUG

#include <simplecpp>
#include <cassert>

long long int gcd(long long int m, long long int n){
	assert((m > 0) && (n > 0));
	return (m % n == 0 ? n : gcd(n, m % n));
}

void TowerOfHanoi(long long int n, char from, char to, char aux){
	if(n == 1){
		cout << n << " " << from << " " << to << "\n";
		return;
	}
	TowerOfHanoi(n-1, from, aux, to);
	cout << n << " " << from << " " << to << "\n";
	TowerOfHanoi(n-1, aux, to, from);
}

// Strassen's Algorithm

long long int _xor(long long int a, long long int b){
	return (a || b) && !(a && b);
}

main_program{
	// long long int n;
	// cin >> n;
	// cout << pow(2, n) - 1 << "\n";
	// TowerOfHanoi(n, 'A', 'C', 'B');

	// long long int m, n;
	// cin >> m >> n;
	// cout << gcd(m, n) << "\n";

	// for(long long int i = 0; i < 2; i++){
	// 	for(long long int j = 0; j < 2; j++){
	// 		cout << i << " " << j << " " << _xor(i, j) << "\n";
	// 	}
	// }

	cout << (long long int) RAND_MAX << "\n";
}