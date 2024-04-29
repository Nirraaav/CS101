#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long long int a[n][n];
	for(long long int i = 0; i < n; i++){
		for(long long int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(long long int i = 0; i < 2 * n - 1; i++){
		for(long long int j = i; j >= 0; j--){
			if(j < n && i - j < n){
				cout << a[j][i-j] << " ";
			}
		}
		cout << "\n";
	}
}