#include <simplecpp>

main_program{
	int n;
	cin >> n;
	int i = 0;
	repeat(n){
		repeat(i){
			cout << 0 << " ";
		}
		cout << 1 << " ";
		repeat(n-1-i){
			cout << 0 << " ";
		}
		cout << endl;
		i++;
	}
}