#include <simplecpp>

main_program{
	long double t;
	cin >> t;
	if(t == 1){
		long double l, b;
		cin >> l >> b;
		if((l < 1) || (l > 5000)){
			cout << "invalid length" << "\n";
			if((b < 1) || (b > 5000)){
				cout << "invalid breadth" << "\n";
			}
			return 0;
		}
		if((b < 1) || (b > 5000)){
			cout << "invalid breadth" << "\n";
			return 0;
		}
		cout << l*b << "\n";
	}else if(t == 2){
		long double pi = 3.14159;
		long double r;
		cin >> r;
		if((r < 1) || (r > 5000)){
			cout << "invalid radius" << "\n"; 
		}else{
			cout << pi*r*r << "\n";
		}
	}else{
		cout << "invalid task number" << "\n";
	}
}