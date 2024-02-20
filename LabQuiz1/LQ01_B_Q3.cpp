 #include <simplecpp>

main_program{
	long double a, b, c;
	cin >> a >> b >> c;

	long double mx;
	if(a >= b && a >= c){
		mx = a;
	}else if(b >= a && b >= c){
		mx = b;
	}else if(c >= a && c >= b){
		mx = c;
	}

	cout << mx << "\n";
}