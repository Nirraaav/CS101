#include <simplecpp>

void swap(long double &a, long double &b){
	long double temp = a;
	a = b;
	b = temp;
}

void sortDescending(long double &a, long double &b, long double &c, long double &d){
	if(a < b){
		swap(a, b);
	}
	if(b < c){
		swap(b, c);
	}
	if(c < d){
		swap(c, d);
	}
	if(a < b){
		swap(a, b);
	}
	if(b < c){
		swap(b, c);
	}
	if(a < b){
		swap(a, b);
	}
}

main_program{
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	sortDescending(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << "\n";
}