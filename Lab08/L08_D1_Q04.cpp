#include <simplecpp>

// Method 1 - Simple
// main_program{
	// long long int a[10000];
	// long long int n = 0;
	// long long int x;
	// while (cin >> x) {
	// 	if(!(x == 0 || x == 1 || x == 2)){
	// 		break;
	// 	}
	// 	a[n] = x;
	// 	n++;
	// }

	// long long int cnt = 0;
	// for(long long int i = 0; i < n; i++){
	// 	if(a[i] == 0){
	// 		cnt++;
	// 	}else{
	// 		cout << a[i] << " ";
	// 	}
	// }

	// for(long long int i = 0; i < cnt; i++){
	// 	cout << 0 << " ";
	// }
	// cout << "\n";
// }

// Method 2 - New Array
// main_program{
	// long long int a[10000], b[10000];
	// long long int n = 0, bn = 0;;
	// long long int x;
	// while (cin >> x) {
	// 	if(!(x == 0 || x == 1 || x == 2)){
	// 		break;
	// 	}
	// 	a[n] = x;
	// 	n++;
	// }

	// long long int cnt = 0;
	// for(long long int i = 0; i < n; i++){
	// 	if(a[i] == 0){
	// 		cnt++;
	// 	}else{
	// 		b[bn] = a[i];
	// 		bn++;
	// 	}
	// }

	// for(long long int i = 0; i < n; i++){
	// 	cout << b[i] << " ";
	// }
	// cout << "\n";
// }

// Method 3 - Manipulating Array a
main_program{
	long long int a[10000];
	long long int n = 0;
	long long int x;
	while (cin >> x) {
		if(!(x == 0 || x == 1 || x == 2)){
			break;
		}
		a[n] = x;
		n++;
	}

	long long int cnt = 0;
	for(long long int i = 0; i < n; i++){
		if(!(a[i] == 0)){
			a[cnt] = a[i];
			cnt++;
		}
	}

	for(long long int i = cnt; i < n; i++){
		a[i] = 0;
	}

	for(long long int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}