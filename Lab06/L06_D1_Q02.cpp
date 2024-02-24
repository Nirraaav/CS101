#include <simplecpp>

void shiftRight(long double &a, long double &b, long double &c, long double &d){
	long double temp = d;
	d = c;
	c = b;
	b = a;
	a = temp;
}

main_program{
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	shiftRight(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << "\n";
}