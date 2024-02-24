#include <simplecpp>

long double f(long double a, long double b, long double c, long double x){
	long double val = a * x * x + b * x + c;
	return val;
}

long double f_dash(long double a, long double b, long double c, long double x){
	long double val = 2 * a * x + b;
	return val;
}

main_program{
	long double a, b, c;
	cin >> a >> b >> c;
	long double x_old;
	cin >> x_old;
	long double x_new = x_old - (f(a, b, c, x_old)/f_dash(a, b, c, x_old));
	long double eps = 0.0001;
	while(abs(x_new - x_old) >= eps){
		cout << x_old << " " << x_new << "\n";
		x_old = x_new;
		x_new = x_old - (f(a, b, c, x_old)/f_dash(a, b, c, x_old));
	}
	cout << x_new << "\n";
}