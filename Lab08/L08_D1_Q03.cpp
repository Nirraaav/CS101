#include <simplecpp>

main_program{
	long long int a[10000], b[10000];
	long long int an = 0, bn = 0;
	long long int x;
	while (cin >> x) {
		if(x == -1){
			break;
		}
		a[an] = x;
		an++;
	} 

	while (cin >> x) {
		if(x == -1){
			break;
		}
		b[bn] = x;
		bn++;
	}

    long long int c[10000];
    long long int idx = 0;
    for(long long int i = 0; i < an; i++){
    	for(long long int j = 0; j < bn; j++){
    		if(a[i] == b[j]){
    			c[idx] = a[i];
    			idx++;
    			break;
    		}
    	}
    }

    if(idx != 0){
    	for(long long int i = 0; i < idx; i++){
    		cout << c[i] << " ";
    	}
    	cout << "\n";
    }else{
    	cout << -1 << "\n";
    }
}