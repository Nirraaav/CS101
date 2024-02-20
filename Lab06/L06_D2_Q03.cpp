#include <simplecpp>

long double f(long double a, long double b, long double c, long double x){
	long double val = a*x*x + b*x + c;
	return val;
}

long double root(long double &a, long double &b, long double &c, long double &m, long double &n, long double eps = 0.01){
	long double mid = (m+n)/2;
	if(m == n){
		return m;
	}
	if(abs(f(a, b, c, mid)) < eps){
		return mid;
	}else if(f(a, b, c, mid)*f(a, b, c, m) > 0){
		return root(a, b, c, mid, n, eps);
	}else if(f(a, b, c, mid)*f(a, b, c, n) > 0){
		return root(a, b, c, m, mid, eps);
	}else{
		return mid;
	}
}

main_program{
	long double a, b, c;
	long double m, n;
	cin >> a >> b >> c;
	cin >> m >> n;
	long double eps = 0.01;
	long double ans = root(a, b, c, m, n, eps);
	cout << ans << "\n";
}