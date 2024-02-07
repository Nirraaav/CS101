#include <simplecpp>

main_program{
	long long int N;
	cin >> N;
	long long int n = N;
	long long int reversedN = 0;
	while(N > 0){
		reversedN = reversedN * 10 + (N % 10);
		N /= 10;
	}
	// cout << N << " " << reversedN << "\n";
	if(n == reversedN){
		cout << "True" << "\n";
	}else{
		cout << "False" << "\n";
	}
}