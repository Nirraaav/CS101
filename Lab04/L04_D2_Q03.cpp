#include <simplecpp>

main_program{
	int n;
	cin >> n;
	// if((n == 6) || (n == 28) || (n == 496) || (n == 8128)){
	// 	cout << "perfect" << "\n";
	// }else{
	// 	cout << "not perfect" << "\n";
	// }
	int sum = 0;
	int curr = 1;
	repeat(n){
		if(n % curr == 0){
			sum += curr;
		}
		curr++;
	}
	if(sum == 2*n){
		cout << "perfect" << "\n";
	}else{
		cout << "not perfect" << "\n";
	}
}