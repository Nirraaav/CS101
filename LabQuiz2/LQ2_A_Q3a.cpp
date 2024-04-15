#include <simplecpp>

long long int virahaanka_recursion(long long int n, long long int &count){
	count++;
	if(n == 1){
		return 1;
	}else if(n == 2){
		return 2;
	}else{
		return virahaanka_recursion(n-1, count) + virahaanka_recursion(n-2, count);
	}
}

main_program{
	long long int virahaanka[21];
	virahaanka[1] = 1;
	virahaanka[2] = 2;
	for(long long int i = 3; i <= 20; i++){
		virahaanka[i] = virahaanka[i-1] + virahaanka[i-2];
	}
	for(long long int i = 1; i <= 20; i++){
		cout << virahaanka[i] << " ";
	}
	cout << "\n";
	for(long long int i = 1; i <= 20; i++){
		long long int count = 0;
		cout << virahaanka_recursion(i, count) << " ";
	}
	cout << "\n";
	for(long long int i = 1; i <= 20; i++){
		long long int count = 0;
		long long int ans = virahaanka_recursion(i, count);
		cout << count << " ";
	}
	cout << "\n";
}