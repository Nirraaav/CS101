#include <simplecpp>

main_program{
	int t;
	cin >> t;
	repeat(t){
		long double marks;
		cin >> marks;
		if((marks > 100) || (marks < 0)){
			cout << "INVALID" << " ";
		}else if(marks >= 90){
			cout << "AA" << " ";
		}else if(marks >= 80){
			cout << "AB" << " ";
		}else if(marks >= 70){
			cout << "BB" << " ";
		}else if(marks >= 60){
			cout << "BC" << " ";
		}else if(marks >= 40){
			cout << "CC" << " ";
		}else{
			cout << "F" << " ";
		}
	}
	cout << "\n";
}