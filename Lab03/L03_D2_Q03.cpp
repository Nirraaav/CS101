#include <simplecpp>

main_program{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int b;
	cin >> b;
	for(int i = 0; i < n; i++){
		a[i] %= b;
	}
	int ans = 1;
	for(int i = 0; i < n; i++){
		ans *= a[i];
		ans %= b;
	}
	cout << ans << "\n";
}