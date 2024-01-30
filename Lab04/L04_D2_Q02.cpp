#include <simplecpp>

main_program{
	int d, m, y;
	cin >> d >> m >> y;
	if((y < 1400) || (y > 3000)){
		cout << "invalid" << "\n";
		return;
	}
	if((d > 31) || (d < 1)){
		cout << "invalid" << "\n";
		return;
	}
	if((m > 12) || (m < 1)){
		cout << "invalid" << "\n";
		return;
	}
	if(!((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))){
		if((d > 30) || (d < 1)){
			cout << "invalid" << "\n";
			return;
		}
	}
	if((y % 4 == 0) && !(y % 400 == 0) && (y % 100 == 0)){
		if((m == 2) && (d == 29)){
			cout << "invalid" << "\n";
			return;
		}
	}
	if((y % 4 == 0) && (m == 2) && ((d < 1) || (d > 29))){
		cout << "invalid" << "\n";
		return;
	}
	if(!(y % 4 == 0) && (m == 2) && ((d < 1) || (d > 28))){
		cout << "invalid" << "\n";
		return;
	}
	cout << "valid" << "\n";
	return;
}