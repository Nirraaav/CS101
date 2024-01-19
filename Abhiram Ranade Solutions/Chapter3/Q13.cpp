#include <simplecpp>

main_program{
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	cout << distance << '\n';
}