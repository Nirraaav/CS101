#include <simplecpp>

main_program{
	int a1, a2, a3, a4, a5, a6, a7, x;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> x;
	if(x == 0){
		cout << "monday:" << a1 << "\n";
		cout << "tuesday:" << a2 << "\n";
		cout << "wednesday:" << a3 << "\n";
		cout << "thursday:" << a4 << "\n";
		cout << "friday:" << a5 << "\n";
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 1){
		cout << "tuesday:" << a2 << "\n";
		cout << "wednesday:" << a3 << "\n";
		cout << "thursday:" << a4 << "\n";
		cout << "friday:" << a5 << "\n";
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 2){
		cout << "wednesday:" << a3 << "\n";
		cout << "thursday:" << a4 << "\n";
		cout << "friday:" << a5 << "\n";
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 3){
		cout << "thursday:" << a4 << "\n";
		cout << "friday:" << a5 << "\n";
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 4){
		cout << "friday:" << a5 << "\n";
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 5){
		cout << "saturday:" << a6 << "\n";
		cout << "sunday:" << a7 << "\n";		
	}else if(x == 6){
		cout << "sunday:" << a7 << "\n";		
	}else{
		cout << "invalid input" << "\n";
	}
}