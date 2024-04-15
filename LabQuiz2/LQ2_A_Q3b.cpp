#include <simplecpp>

long double det(long double a[][3]){
	long double res = a[0][0]*a[1][1]*a[2][2] + a[0][1]*a[1][2]*a[2][0] + a[0][2]*a[1][0]*a[2][1] - a[0][2]*a[1][1]*a[2][0] - a[0][1]*a[1][0]*a[2][2] - a[0][0]*a[1][2]*a[2][1];
	return res;
}

main_program{
	long double a[3][4];
	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 4; j++){
			cin >> a[i][j];
		}
	}

	long double x[3][3], y[3][3], z[3][3], init[3][3];
	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 3; j++){
			if(j == 0){
				x[i][j] = a[i][j+3];
			}else{
				x[i][j] = a[i][j];
			}
		}
	}

	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 3; j++){
			if(j == 1){
				y[i][j] = a[i][j+2];
			}else{
				y[i][j] = a[i][j];
			}
		}
	}

	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 3; j++){
			if(j == 2){
				z[i][j] = a[i][j+1];
			}else{
				z[i][j] = a[i][j];
			}
		}
	}

	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 3; j++){
			init[i][j] = a[i][j];
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << det(x)/det(init) << "\n";	
	cout << det(y)/det(init) << "\n";	
	cout << det(z)/det(init) << "\n";	
}