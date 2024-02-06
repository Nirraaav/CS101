#include<simplecpp>

main_program{
	long long int n;
	cin >> n;
	if(n == 0){
		cout << "invalid input" << "\n";
	}else{
		long long int n1 = n;
		long long int digits = 0;
		while(n1 > 0){
			n1 /= 10;
			digits++;
		}

		long long int divisor = 1;
		for(long long int i = 0; i < digits-1; i++){
			divisor *= 10;
		}

		for(long long int i = 0; i < digits; i++){
			cout << n / divisor << "\n";
			n -= divisor * (n / divisor);
			divisor /= 10;
		}
	}
}
