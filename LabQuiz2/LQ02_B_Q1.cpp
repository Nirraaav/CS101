#include <simplecpp>

main_program{
	long long int a[9][9];
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> a[i][j];
		}
	}

	long long int check[9] = {0};
	long long int rows = 0, cols = 0, sqr = 0;
	for(long long int i = 0; i < 9; i++){
		for(long long int j = 0; j < 9; j++){
			check[a[i][j]-1]++;
		}
		for(int k=0; k<9; k++){
			if(check[k] != 1){
				rows++;
				break;
			}
		}
		for(int k=0; k<9; k++){
			check[k] = 0;
		}
	}
	for(long long int i = 0; i < 9; i++){
		for(long long int j = 0; j < 9; j++){
			check[a[j][i]-1]++;
		}
		for(int k=0; k<9; k++){
			if(check[k] != 1){
				cols++;
				break;
			}
		}
		for(int k=0; k<9; k++){
			check[k] = 0;
		}
	}

	for(long long int i = 0; i < 3; i++){
		for(long long int j = 0; j < 3; j++){
			int corr = 0;
			for(long long int k = 0; k < 3; k++){
				for(long long int l = 0; l < 3; l++){
					check[a[i*3+k][j*3+l]-1]++;
				}
			}

			for(int k=0; k<9; k++){
				if(check[k] != 1){
					corr++;
				}
			}

			if(corr) sqr++;

			for(int k=0; k<9; k++){
				check[k] = 0;
			}
		}
	}

	cout << rows << " " << cols << " " << sqr << "\n";
}