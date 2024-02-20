#include <simplecpp>
// #include <cassert>

long double calc(long double &a, char op, long double &b){
	if(op == '+'){
		return a + b;
	}else if(op == '-'){
		return a - b;
	}else if(op == '*'){
		return a * b;
	}else if(op == '/'){
		// assert(b != 0);
		return a / b;
	}else{
		return 0;
	}
}

main_program{
	long double a;
	cin >> a;
	char op;
	while(1 > 0){
		cin >> op;
		if(op == 'X' || op == '='){
			break;
		}else{
			long double b;
			cin >> b;
			a = calc(a, op, b);
		}
	}
	cout << a << "\n";
}