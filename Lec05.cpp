#include <simplecpp>

main_program{
	// int x = 5;
	// cout << x << '\n';
	// {
	// 	cout << x << '\n';
	// 	x = 10;
	// 	cout << x << '\n';
	// }
	// cout << x << '\n';


	// int x=2, y=3, p=4, q=5;
	// int r, s, t, u;
	// r = x * y + p * q;
	// s = x * (y + p) * q;
	// t = x - y + p - q;
	// u = x + q;
	// cout << r << " " << s << " " << t << " " << u << '\n';

	int a = 6;
	int b = 5;
	int ans = ((a = 3) * b) + (a++ * b);
	cout << ans << '\n';
}