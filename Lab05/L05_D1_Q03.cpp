#include <simplecpp>

main_program{
	bool c = false, a = false, t = false;
	long long int C = 0, A = 0, T = 0;
	long long int place = 0;
	while(!c || !a || !t){
		char x;
		cin >> x;
		if(x == 'c' && !c){
			c = true;
			C = place;
		}else if(x == 'a' && !a && c){
			a = true;
			A = place;
		}else if(x == 't' && !t && c && a){
			t = true;
			T = place;
		}
		place++;
	}
	cout << C << A << T << "\n";
}