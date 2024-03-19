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
	for(long long int i = 0; i < n; i++){
		if(i % 2 == 0){
			for(long long int j = 0; j < n; j++){
				cout << a[i][j] << " ";
			}
		}else{
			for(long long int j = n-1; j >= 0; j--){
				cout << a[i][j] << " ";
			}
		}
	}	
}
