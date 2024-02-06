#include<simplecpp>

main_program{
	long long int n;
	cin >> n;

	long long int n1 = n;
	bool check = true;
	while(n1 > 0){
		if(n1 % 10 == 9 || n1 % 10 == 0){
			check = false;
		}
		n1 /= 10;
	}

	if(check){
		long long int n2 = n;
		long long int digits = 0;
		while(n2 > 0){
			n2 /= 10;
			digits++;
		}

		long long int n3 = n;
		for(long long int i = 0; i < digits; i++){
			if(n % (n3 % 10) != 0){
				check = false;
			}
			n3 /= 10;
		}
	}

	if(check){
		cout << "yes" << "\n";
	}else{
		cout << "no" << "\n";
	}
}