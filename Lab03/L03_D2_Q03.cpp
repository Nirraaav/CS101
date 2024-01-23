#include <simplecpp>

main_program{
	int n;
	cin >> n;
	int b;
	cin >> b;
	int ans = 1;
	repeat(n){
		int a;
		cin >> a;
		a %= b;
		ans *= a;
		ans %= b;
	}
	cout << ans << "\n";
}