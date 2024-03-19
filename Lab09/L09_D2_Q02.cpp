#include <simplecpp>
#include <ctime>
#include <cassert>

long double randuv(int u, int v){
	return (long double) u + ((long double) rand() / ((long double) 1.0 + RAND_MAX)) * (v - u);
}

main_program{
	long long int randi = time(NULL);
	long long int points_in_circle = 0;
	long long int num_times = 1000000;
	long long int mod = 1e9+7;
	for(long long int i = 0; i < num_times; i++){
		randi *= rand();
		randi %= mod;
		srand(randi);
		long double x = randuv(-1, 1);
		randi *= rand();
		randi %= mod;
		srand(randi);
		long double y = randuv(-1, 1);
		// cout << x << " " << y << "\n";
		long double distance = sqrt(x*x + y*y);
		if(distance < 1){
			points_in_circle++;
		}
	}
	cout << points_in_circle*1.0/num_times << "\n";
}