#include <simplecpp>
#include <limits>

main_program{
	int count;
	cin >> count;

	float num, maximum;
	maximum = -numeric_limits<float>::max();

	repeat(count){
		cin >> num;
		// cout << num << "\n";
		maximum = max(maximum, num);
	}

	cout << "Maximum is " << maximum << "\n";
	cout << -numeric_limits<float>::max() << "\n";
}