#include <simplecpp>

main_program{
	long long int a[10000];
	long long int b[10000], c[10000];
	long long int n = 0;
	long long int bn = 0, cn = 0;
	long long int x;
	while (cin >> x) {
		if(x == -1){
			break;
		}
		a[n] = x;
		n++;
	}
	
	for(long long int i = 0; i < n; i++){
		bool multiple = false;
		if(a[i] != -1){
			for(long long int j = i+1; j < n; j++){
				if(a[j] == a[i]){
					multiple = true;
					a[j] = -1;
				}
			}
			if(!multiple){
				b[bn] = a[i];
				bn++;
			}else{
				c[cn] = a[i];
				cn++;
			}
		}
	}   

	for(long long int i = 0; i < bn; i++){
		cout << b[i] << " ";
	}
	cout << "\n";
	for(long long int i = 0; i < cn; i++){
		cout << c[i] << " ";
	}
	cout << "\n";
}