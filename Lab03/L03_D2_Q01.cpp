#include <simplecpp>

int factorial(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

main_program{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			cout << "*";
		}
		for(int j = 0; j < i + 1; j++){
			cout << factorial(i)/(factorial(j)*factorial(i - j));
			if(j != i){
				cout << " ";
			}
		}for(int j = 0; j < n-1-i; j++){
			cout << "*";
		}
		cout << "\n";
	}
}