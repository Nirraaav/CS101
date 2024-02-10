#include <simplecpp>

main_program{
	long long int max = -1;
	long long int max2 = -1;
	while(1 > 0){
		long long int a;
		cout << "Enter Value: ";
		cin >> a;
		if(a > max2){
			if(a > max){
				max2 = max;
				max = a;
			}else if(a < max){
				max2 = a;
			}
		}

		// cout << a << " " << max << " " << max2 << "\n";

		if(a == -1){
			break;
		}
	}

	if(max2 != -1){
		cout << "Second Highest = " << max2 << "\n";
	}else{
		cout << "No Second Highest" << "\n";
	}
}