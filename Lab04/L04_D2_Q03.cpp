#include <simplecpp>

main_program{
	int n;
	cin >> n;
	if((n == 6) || (n == 28) || (n == 496) || (n == 8128)){
		cout << "perfect" << "\n";
	}else{
		cout << "not perfect" << "\n";
	}
}