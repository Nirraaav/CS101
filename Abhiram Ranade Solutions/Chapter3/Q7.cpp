#include <simplecpp>

main_program{
	int a, d, n;
	cin >> a >> d >> n;
	int term = a;
	repeat(n){
		cout << term << " ";
		term += d;
	}
	cout << "\n";
}