#include <simplecpp>

main_program{
	long long int n;
	cin >> n;
	long long int a[n];
	long long int result = 0;
	for(long long int i = 0; i < n; i++){
		cin >> a[i];
		if(i > 0 && a[i] >= a[i-1]){
			result++;
		}
	}
	cout << result << "\n";
}