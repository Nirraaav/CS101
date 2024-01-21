#include <simplecpp>

main_program{
	turtleSim();
	float a = 0.1;
	repeat(10000){
		left(1);
		forward(a);
		a += 0.001;
	}
	wait(10);
}