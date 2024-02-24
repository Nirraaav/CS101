#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long long int sum = 0;
	long long int temp = n;
	while(temp){
		sum += (temp % 10)*(temp % 10)*(temp % 10);
		temp /= 10;
	}

	if(sum == n){
		cout << "TRUE" << "\n";
	}else{
		cout << "FALSE" << "\n";
	}
}