#include <simplecpp>

main_program{
	long long int n;
	cin >> n;

	long long int largest_digit = 9;
	while(largest_digit >= 0){
		long long int temp = n;
		bool found = false;
		while(temp){
			long long int digit = temp % 10;
			if(digit == largest_digit){
				cout << digit;
				found = true;
			}
			temp /= 10;
			if(found){
				break;
			}
		}
		largest_digit--;
	}
	cout << "\n";
}