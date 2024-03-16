#include <simplecpp>

main_program{
	long long int roll[10000];
	long long int idx = 0;
	long double x;
	while(cin >> x){
		if(x == -1){
			break;
		}
		roll[idx] = x;
		idx++;
	}

	long long int check;
	long long int count = 0;
	cin >> check;
	for(long long int i = 0; i < idx; i++){
		if(roll[i] == check){
			count++;
			cout << i << "\n";
		}
	}
	cout << (count ? "" : "-1") << "\n";
}