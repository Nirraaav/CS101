#include <simplecpp>

main_program{
	long long inches;
	cin >> inches;
	long long miles, furlongs, yards, feet;
	miles = inches/(8*220*3*12);
	inches -= miles*(8*220*3*12);
	furlongs = inches/(220*3*12);
	inches -= furlongs*(220*3*12);
	yards = inches/(3*12);
	inches -= yards*(3*12);
	feet = inches/12;
	inches -= feet*12;
	cout << miles << " miles, " << furlongs << " furlongs, " << yards << " yards, " << feet << " feet, " << inches << " inches." << '\n';
	cout << (feet + 3 * (yards + 220 * (furlongs + 8 * miles))) * 12 + inches << '\n';
}