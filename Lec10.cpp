#include <simplecpp>

long long int gcd(long long int m, long long int n){
	return (n == 0 ? m : gcd(n, m % n));
}

main_program{
	// cout << gcd(10, 20) << "\n";
	long long int m, n;
	cin >> m >> n;
	// long long int g = 1;
	// do{
	// 	g = a % b;
	// 	a = b;
	// 	b = g;
	// }while(b != 0);

	// while(m % n != 0){
	// 	g = m % n;
	// 	m = n;
	// 	n = g;
	// }

	// for(long long int i = 1; i <= n; i++){
	// 	if(m % i == 0 && n % i == 0){
	// 		g = i;
	// 	}
	// }

	// repeat(100){
	// 	cout << (_iterator_i+1) << " " << (_iterator_i+1)*(_iterator_i+1)*(_iterator_i+1) << "\n";
	// }

	// cout << g << "\n";

	long long int digits_m = 0;
	for(long long int i = 1; i <= m; i *= 2){
		digits_m++;
	}
	
	long long int divisor_m = 1;
	for(long long int i = 0; i < digits_m-1; i++){
		divisor_m *= 2;
	}	

	int m_bin = 0;
	repeat(digits_m){
		if(m >= divisor_m){
			m_bin = m_bin * 10 + 1;
			m -= divisor_m;
		}else{
			m_bin *= 10;
		}
		divisor_m /= 2;
	}
	
	long long int digits_n = 0;
	for(long long int i = 1; i <= n; i *= 2){
		digits_n++;
	}
	
	long long int divisor_n = 1;
	for(long long int i = 0; i < digits_n-1; i++){
		divisor_n *= 2;
	}	

	int n_bin = 0;
	repeat(digits_n){
		if(n >= divisor_n){
			n_bin = n_bin * 10 + 1;
			n -= divisor_n;
		}else{
			n_bin *= 10;
		}
		divisor_n /= 2;
	}
	cout << m_bin << " " << n_bin << "\n";

	long long int g = 0;

	long long int mul = 1;

	while(digits_m-- && digits_n--){
		if(m_bin % 10 == 1 && n_bin % 10 == 1){
			g += mul;
		}
		m_bin /= 10;
		n_bin /= 10;
		mul *= 2;
	}
	cout << g << "\n";
}