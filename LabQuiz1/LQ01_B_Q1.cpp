#include <simplecpp>

main_program{
	turtleSim();
	repeat(4){
		forward(100);
		left(90);
	}
	penUp();
	forward(100);
	penDown();
	left(45);
	forward(50);
	left(45);
	forward(100);
	left(135);
	forward(50);
	penUp();
	right(180);
	forward(50);
	penDown();
	left(135);
	forward(100);
	left(45);
	forward(50);
	wait(100);
}