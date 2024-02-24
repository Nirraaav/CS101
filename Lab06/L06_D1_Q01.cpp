#include <simplecpp>

main_program{
	long double bal;
	cin >> bal;
	char bs;
	while(1 > 0){
		cin >> bs;
		if(bs == '='){
			break;
		}else if(bs == 'b'){
			long double cost, num;
			cin >> cost >> num;
			bal -= (cost * num);
		}else if(bs == 's'){
			long double cost, num;
			cin >> cost >> num;
			bal += (cost * num);
		}
	}
	cout << bal << '\n';
}