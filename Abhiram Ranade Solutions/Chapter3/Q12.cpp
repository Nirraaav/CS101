#include <simplecpp>

main_program{
	char p, q;
	int dig1, dig2, n;
	cin >> p >> q;
	// cout << (int) p << " " << (int) q << "\n";
	dig1 = p - 48;
	dig2 = q - 48; 
	n = 10*dig1 + dig2;
	cout << dig1 << " " << dig2 << " " << n << "\n";
}