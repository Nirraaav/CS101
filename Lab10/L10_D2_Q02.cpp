#include <simplecpp>

long long int recursion_words(char inp[], bool last_space){
	if(inp[0] == '.'){
		return 0;
	}else if(inp[0] == ' ' && last_space == false){
		return 1 + recursion_words(inp + 1, true);
	}else if(inp[0] == ' '){
		return recursion_words(inp + 1, true);
	}else{
		return recursion_words(inp + 1, false);
	}
}

main_program{
	char inp[10000];
	cin.getline(inp, 10000);
	long long int ans = recursion_words(inp, false);
	cout << ++ans << "\n";
}