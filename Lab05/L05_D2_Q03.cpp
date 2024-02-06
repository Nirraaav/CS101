#include<simplecpp>

main_program{
	long double n;
	long double sum = 0;
	long double count = 0;
	while(1 > 0){
		cin >> n;
		if(n == -1){
			break;
		}else{
			sum += n;
			count += 1;
			cout << sum/count << "\n";
		}
	}
}