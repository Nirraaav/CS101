#include<simplecpp>

main_program{
	int a, d, n;
	cin >> a >> d >> n;
	int term = a;
	int multiplier = 0;
	repeat(n){
		term = a + multiplier*d;
		multiplier++;
		cout << term << " ";
	}
	cout << '\n';
}