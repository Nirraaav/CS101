#include <simplecpp>

main_program{
	long long int x = (100 * 99 * 98 * 97 * 96 * 95) / (1 * 2 * 3 * 4 * 5 * 6);
	long long int y = 100/1 * 99/2 * 98/3 * 97/4 * 96/5 * 95/6;
	long long int z = 100/6 * 99/5 * 98/4 * 97/3 * 96/2 * 95/1;
	long long int u = 100.0 * 99 * 98 * 97 * 96 * 95/ (1 * 2 * 3 * 4 * 5 * 6);
	long long int v = 100.0/1 * 99/2 * 98/3 * 97/4 * 96/5 * 95/6;
	long long int w = 100.0/6 * 99/5 * 98/4 * 97/3 * 96/2 * 95/1;

	cout << x << " " << y << " " << z << endl;
	cout << u << " " << v << " " << w << endl;

	// u, v, w are correct due to calculation using floats
	// x, y are incorrect due to overflow 
	// z in incorrect due to division with remainder
}