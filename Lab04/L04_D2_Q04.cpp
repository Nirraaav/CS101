#include <simplecpp>

main_program{
	long double a, b, c;
	cin >> a >> b >> c;
	if(a == 0){
		if((b == 0) && (c == 0)){
			cout << "Infinitely Many Solutions" << "\n";
		}else if((b == 0) && (c != 0)){
			cout << "No Solutions" << "\n";
		}else{
			cout << -(c/b) << "\n";
		}
	}else{
		long double discriminant = b*b - 4*a*c;
		if(discriminant == 0){
			cout << -(b/(2*a)) << " " << -(b/(2*a)) << "\n";
		}else if(discriminant > 0){
			cout << (-b + sqrt(discriminant))/(2*a) << " " << (-b - sqrt(discriminant))/(2*a) << "\n";
		}else{
			cout << -(b/(2*a)) << " " << (sqrt(-discriminant)/(2*a)) << "i" << "\n";
			cout << -(b/(2*a)) << " " << -(sqrt(-discriminant)/(2*a)) << "i" << "\n";
		}
	}
}