#include <simplecpp>

main_program{
	// int x = 10;
	// if(x > 5){
	// 	x = 20;
	// 	x--;
	// 	cout << x << "\n";
	// }
	// cout << x << "\n";

	// int x;
	// while(cin >> x){
	// 	cout << x*x << "\n"
	// }

	// int x=306, y=77, z=0;
	// while(x > 0){
	// 	z = z + y;
	// 	x--;
	// }
	// cout << z << endl;

	// int n;
	// cin >> n;
	// int ans = 0;
	// while(n > 0){
	// 	n /= 10;
	// 	ans++;
	// }
	// cout << ans << endl;

	// int n;
	// cin >> n;
	// int ans = ceil(log10(n));
	// cout << ans << "\n";

	// int i = 100;
	// for(int i = 0; i < 10; i++){
	// 	cout << i*i*i << "\n";
	// }
	// cout << i << "\n";

	// int n;
	// cin >> n;
	// int ans = 0;
	// int x = 1;
	// while(x <= n){
	// 	x *= 10;
	// 	ans++;
	// }
	// cout << ans << "\n";

	int n;
	cin >> n;
	int ans = 0;
	for(int x = 1; x <= n; x *= 10){
		ans++;
		// cout << x << " " << n/x << " " << ans << "\n";
	}
	cout << ans << "\n";
}
