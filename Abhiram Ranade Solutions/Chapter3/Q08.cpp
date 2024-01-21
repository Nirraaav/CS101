#include <simplecpp>

main_program{
	int a, r, n;
	cin >> a >> r >> n;
	int term = a;
	repeat(n){
		cout << term << " ";
		term *= r;
	}
	cout << "\n";
}