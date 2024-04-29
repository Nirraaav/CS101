#include <simplecpp>

main_program{
	char sentence[10000];
	cin.getline(sentence, 10000);
	long long int w;
	cin >> w;
	for(long long int i = 0; sentence[i] != '\0'; i++){
		cout << sentence[i];
		if((i+1) % w == 0){
			cout << "\n";
		}
	}
	cout << "\n";
}