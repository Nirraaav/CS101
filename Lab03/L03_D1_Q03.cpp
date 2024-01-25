#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> val;
	while(n != 0){
		int a = n % 2;
		val.push_back(a);
		n /= 2;
	}
	reverse(val.begin(), val.end());
	for(int i = 0; i < val.size(); i++){
		cout << val[i];
	}
	cout << endl;
}