#include <simplecpp>

main_program{
	long long int n;
	cin >> n;

	long long int N = n;
	bool check = true;
	while(N > 0){
		if(!(N % 10 == 0 || N % 10 == 1)){
			check = false;
		}
		N /= 10;	
	}

	long long int digits = 0;
	long long int n1 = n;
	while(n1 > 0){
		n1 /= 10;
		digits += 1;
	}

	long long int pow = 1;
	long long int ans = 0;
	for(long long int i = 0; i < digits; i++){
		ans += (n % 10)*pow;
		pow *= 2;
		n /= 10;
	}
	if(check){
		cout << ans << "\n";
	}else{
		cout << "INVALID" << "\n";
	}
}