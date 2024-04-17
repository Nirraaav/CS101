#include <simplecpp>

void matrix_mul(long long int a[][100], long long int b[][100], long long int n){
	long long int c[n][n];
	for(long long int i = 0; i < n; i++){
		for(long long int j = 0; j < n; j++){
			c[i][j] = 0;
			for(long long int k = 0; k < n; k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(long long int i = 0; i < n; i++){
		for(long long int j = 0; j < n; j++){
			a[i][j] = c[i][j];
		}
	}
}

main_program{
	long long int n;
	cin >> n;
	long long int s, d;
	cin >> s >> d;
	long long int a[100][100];
	long long int a_orig[100][100];
	for(long long int i = 0; i < n; i++){
		for(long long int j = 0; j < n; j++){
			cin >> a[i][j];
			a_orig[i][j] = a[i][j];
		}
	}

	for(long long int i = 1; i <= n + 1; i++){
		matrix_mul(a, a_orig, n);
		if(a[s][d]){
			cout << i + 1 << "\n";
			break;
		}
	}
	cout << -1 << "\n";
}