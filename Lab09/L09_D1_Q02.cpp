#include <simplecpp>
#include <ctime>
#include <cassert>

long double randuv(int u, int v){
	return (long double) u + ((long double) rand() / ((long double) 1.0 + RAND_MAX)) * (v - u);
}

long long int checkwin(char a[3][3]) {
	for (int i = 0; i < 3; i++) {
		if (a[i][0] == a[i][1] && a[i][0] == a[i][2] && a[i][0] == 'X') {
			return 1;
		}
		if (a[i][0] == a[i][1] && a[i][0] == a[i][2] && a[i][0] == 'O') {
			return -1;
		}
		if (a[0][i] == a[1][i] && a[0][i] == a[2][i] && a[0][i] == 'X') {
			return 1;
		}
		if (a[0][i] == a[1][i] && a[0][i] == a[2][i] && a[0][i] == 'O') {
			return -1;
		}
	}
	if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == 'X') {
		return 1;
	}
	if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == 'O') {
		return -1;
	}
	if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] == 'X') {
		return 1;
	}
	if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] == 'O') {
		return -1;
	}
	return 0;
}
main_program{
	srand(time(NULL));
	long long int mod = 1e9+7;
	long long int randi = time(NULL);
	long long int x_win = 0;
	long long int o_win = 0;
	long long int draws = 0;
	long long int num_times = 100000;
	for(long long int i = 0; i < num_times; i++){
		char board[3][3];
		for(long long int j = 0; j < 3; j++){
			for(long long int k = 0; k < 3; k++){
				board[j][k] = '-';
			}
		}
		for(long long int j = 0; j < 9; j++){
			if(j % 2 == 0){
				randi *= rand();
				randi %= mod;
				srand(randi);
				long long int x = randuv(0, 3);
				randi *= rand();
				randi %= mod;
				srand(randi);
				long long int y = randuv(0, 3);
				while(board[x][y] == 'X' || board[x][y] == 'O'){
					randi *= rand();
					randi %= mod;
					srand(randi);
					x = randuv(0, 3);
					randi *= rand();
					randi %= mod;
					srand(randi);
					y = randuv(0, 3);
				}		
				board[x][y] = 'X';		
			}else{
				randi *= rand();
				randi %= mod;
				srand(randi);
				long long int x = randuv(0, 3);
				randi *= rand();
				randi %= mod;
				srand(randi);
				long long int y = randuv(0, 3);
				while(board[x][y] == 'X' || board[x][y] == 'O'){
					randi *= rand();
					randi %= mod;
					srand(randi);
					x = randuv(0, 3);
					randi *= rand();
					randi %= mod;
					srand(randi);
					y = randuv(0, 3);
				}		
				board[x][y] = 'O';	
			}
			if(checkwin(board) == 1){
				x_win++;
				break;
			}else if(checkwin(board) == -1){
				o_win++;
				break;
			}else if((j == 8 && checkwin(board) == 0)){
				draws++;
				break;	
			}
		}
	}
	cout << x_win/(1.0 * num_times) << " " << o_win/(1.0 * num_times) << " " << draws/(1.0 * num_times) << "\n";
	// cout << 0.585 << " " << 0.285 << " " << 0.125 << "\n";
}