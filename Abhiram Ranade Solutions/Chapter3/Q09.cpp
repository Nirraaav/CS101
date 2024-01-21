#include <simplecpp>

main_program{
	float side;
	int nsquares;
	float q;
	cin >> side >> nsquares >> q;
	turtleSim();
	penUp();
	forward(side/2);
	penDown();
	repeat(nsquares){
		left(90);
		forward(side/2);
		left(90);
		forward(side);
		left(90);
		forward(side);
		left(90);
		forward(side);
		left(90);
		forward(side/2);
		penUp();
		right(90);
		forward(q/2);
		penDown();
		side += q;
		wait(5);
	}
	wait(20);
}