#include<simplecpp>

main_program{
	long long int n;
	cin >> n;
	if(n == 0){
		cout << 0 << "\n";
	}else{
		long long int digits = 0;
		for(long long int i = 1; i <= n; i *= 2){
			digits++;
		}
		
		long long int divisor = 1;
		for(long long int i = 0; i < digits-1; i++){
			divisor *= 2;
		}	

		while(digits--){
			if(n >= divisor){
				cout << 1;
				n -= divisor;
			}else{
				cout << 0;
			}
			divisor /= 2;
		}
		cout << "\n";
	}
}