#include <simplecpp>

main_program{
	int n;
	cin >> n;
	int num = 2;
	repeat(n - 1){
		int check = 2;
		bool prime = true;
		repeat(num - 2){
			if(num % check == 0){
				prime = false;
			}
			check++;
		}
		if(prime == true){
			cout << num << "\n";
		}
		num++;
	}
}