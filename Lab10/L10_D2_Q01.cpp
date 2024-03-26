#include <simplecpp>

main_program{
	char inp[10000];
	cin.getline(inp, 10000);
	long long int ans = 0;
	for(int i = 0; inp[i] != '.'; i++){
		if(inp[i] == ' '){
			ans++;
			while(inp[i] == ' '){
				i++;
			}
		}
	}
	cout << ++ans << "\n";
}