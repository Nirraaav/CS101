#include <simplecpp>

long long int bin_pow(long long int a, long long int b){
	if(b == 0){
		return 1;
	}else if(b == 1){
		return a;
	}else{
		if(b % 2 == 0){
			return bin_pow(a, b/2) * bin_pow(a, b/2);
		}else{
			return bin_pow(a, b/2) * bin_pow(a, b/2) * a;
		}
	}
}

main_program{
	long long int n;
	cin >> n;
	long long int m[n], v[n];
	for(long long int i = 0; i < n; i++){
		cin >> m[i];
	}
	for(long long int i = 0; i < n; i++){
		cin >> v[i];
	}
	long long int max_vol;
	cin >> max_vol;

	long long int max_mass = -1;

	long long int ans[n], final_ans[n];
	for(long long int i = 0; i < n; i++){
		ans[i] = -1;
		final_ans[i] = -1;
	}

	for(long long int i = 1; i < bin_pow(2, n); i++){
		long long int mass = 0;
		long long int vol = 0;
		for(long long int j = 0; j < n; j++){
			if(i & bin_pow(2, j)){
				mass += m[j];
				vol += v[j];
			}
		}
		if(vol <= max_vol && mass > max_mass){
			max_mass = mass;
			for(long long int j = 0; j < n; j++){
				if(i & bin_pow(2, j)){
					ans[j] = 1;
				}
			}

			for(long long int j = 0; j < n; j++){
				final_ans[j] = ans[j];
			}
		}

		for(long long int j = 0; j < n; j++){
			ans[j] = -1;
		}	
	}

	for(long long int i = 0; i < n; i++){
		if(final_ans[i] != -1){
			cout << i+1 << " ";
		}
	}
	cout << "\n";
}